#include "SortContext.h"
#include "BubbleSort.h"
#include "QuickSort.h"

int main()
{
    BubbleSort bubbleSort;
    QuickSort quickSort;

    SortContext context(&bubbleSort);

    context.performSort();
    context.setStrategy(&quickSort);
    context.performSort();

    return 0;
}