#pragma once
#define TRUE 1
#define FALSE 0

#ifndef __NODE_H_
#define __NODE_H_
class NODE
{
public:
	int data;
	NODE *link;
};

NODE*INPUT(NODE*);
void OUTPUT(const NODE*);
void SEARCH(const NODE*);
NODE*INIT(NODE*head);

#endif
