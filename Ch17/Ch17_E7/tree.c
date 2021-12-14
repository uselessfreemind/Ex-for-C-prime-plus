#include "E7.h"


void TreeInit(Tree * ptree)
{
  ptree->levels=0;
  ptree->root=NULL;
}

_Bool TreeEmpty(Tree * ptree)
{
  return (ptree->levels)?0:1;
}

_Bool TreeFull(Tree * ptree)
{
  return (ptree->levels==TREE_LEV)?1:0;
}

int TreeItemNum(Tree * ptree)
{
  return ptree->levels;
}


int TreeDirtn(Node * pn,const Item * item)
{
  if(strncmp(item->word,pn->sth.word,STR_LEN)<0)//node item's string is behind string to be asserted
    return LEFT;
  else if(strncmp(item->word,pn->sth.word,STR_LEN)>0)
    return RIGHT;
  else
    return MEDIUM;
}

static Node * MakeNode(Item * item)
{
  Node * NewNode;
  NewNode=(Node *)calloc(1,sizeof(Node));
  if(NewNode)
  {
    NewNode->sth.occur_times=item->occur_times;
    strncpy(NewNode->sth.word,item->word,STR_LEN);
    return NewNode;
  }
  else
  {
    fprintf(stderr,"Fail to generate a new node\n");
    return NULL;
  }
}

_Bool AddNode(Node * to_add, Node * root)
{
  if(root)
  {
    switch(TreeDirtn(root,&to_add->sth))
    {
    case LEFT:
      AddNode(to_add,root->left);
      if(!root->left)
      root->left=to_add;
      break;
    case RIGHT:
      AddNode(to_add,root->right);
      if(!root->right)
      root->right=to_add;
      break;
    default:
      return false;
    }
  }
  return true;
}

_Bool AddItem(Tree * tree, Item * item)
{
  Node * temp;
  if(TreeFull(tree))
  {
    fprintf(stderr,"The tree is full and cannot add its member anymore\n");
    return false;
  }
  if(TreeEmpty(tree)) //item is allocated in the tree root due to empty
  {
    tree->root=MakeNode(item);
    tree->levels++;
    puts("Root item added");
    return true;
  }
  else
  {
    if(temp=SearchItem(tree,item).child)
    {
      fprintf(stderr,"There is a same item in the tree\n");
      temp->sth.occur_times++;
      return false;
    }//there is a same item in the tree
    else
    {
      Node * temp=MakeNode(item);
      if(!tree->root)
        tree->root=temp;
      else
      {
        if(!AddNode(temp,tree->root))
        {
          fprintf(stderr,"fail to add a node\n");
          return 0;
        }
        else
        {
          printf("successfully add an item\n");
          tree->levels++;
          return 1;
        }
      }
    }
  }
}

pair SearchItem(Tree * pt, const Item * to_search)
{
  pair look;
  Node * act_root=pt->root;//act root position initialise-->tree's root
  Node * root_last;//previous root's position
  if(!strncmp(pt->root->sth.word,to_search->word,STR_LEN))//if search item is in the tree's root
  {
    look.child=act_root;
    look.father=NULL;
  }
  else
  {
    while(act_root)
    {
      if(TreeDirtn(act_root,to_search)==LEFT)//if to left?
      {
        root_last=act_root;//save the last root address
        act_root=act_root->left;
      }
      else if(TreeDirtn(act_root,to_search)==RIGHT)//if to right
      {
        root_last=act_root;//save the last root address
        act_root=act_root->right;
      }
      else //item found
      {
        look.father=root_last;
        if(act_root==root_last->left)
          look.child=root_last->left;
        else
          look.child=root_last->right;
        break;
      }
    }
    if(!act_root)//Item isn't found
    {
      look.child=NULL;
      look.father=NULL;
    }
  }
  return look;
}

_Bool DeleteItem(Tree * tree,Item * to_delete)
{
  pair temp=SearchItem(tree,to_delete);
  if(!temp.child)
  {
    fprintf(stderr,"Item not found.Cannot finish request\n");
    return false;
  }
  else if(temp.father==NULL)//deleted item on the tree root
    free(temp.father);
  else
    DeleteNode(&temp.child);//deleted item on the branches
  tree->levels--;
  return true;
}

static void DeleteNode(Node ** pn)
{
  Node * temp=*pn;
  if((*pn)->left==NULL&&(*pn)->right==NULL)//deleted node doesn't have progenies
    free(*pn);
  else if(!(*pn)->left)//deleted node's left branch is empty
  {
    *pn=(*pn)->right;
    free(temp);
  }
  else if(!(*pn)->right)//deleted node's right branch is empty
  {
    *pn=(*pn)->left;
    free(temp);
  }
  else
  {
    temp=(*pn)->left;
    while(temp->right)
      temp=temp->right;
    temp->right=(*pn)->right;
    free(*pn);
  }
}

void Travers(Node * root, void (*pfun)(void * any))
{
  if(root)
  {
    Travers(root->left,pfun);
    //save=temp;//save node address for right operation
    Travers(root->right,pfun);
    (*pfun)(root);
  }
}


