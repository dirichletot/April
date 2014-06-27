#include "Phrase.h"

Phrase::Phrase(int in_head, int in_modifier)
{
    head = in_head;
    modifier = in_modifier;
    aspect = -1;
    sentiment = -1;
    score = -1;
}

