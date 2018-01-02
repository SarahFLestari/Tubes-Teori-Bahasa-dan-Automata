#ifndef FINAL_H_INCLUDED
#define FINAL_H_INCLUDED
#define top(s) s.top

using namespace std;

typedef string infotype;
struct Stack{
    infotype info[20];
    int top;
};

void createstack(Stack &s);
void push (Stack &s, infotype x);
infotype pop(Stack &s);
void printinfo (Stack &s);
void balikstack (Stack &s);
void pushascending(Stack &s,infotype x);
void getinputstream(Stack &s);

#endif // FINAL_H_INCLUDED
