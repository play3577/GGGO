#include "publicFunc.h"

bool cmpLess(const uctNode *a, const uctNode *b){ return a->score < b->score; }
bool cmpMore(const uctNode* a, const uctNode *b){ return a->score > b->score; }