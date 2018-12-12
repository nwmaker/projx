# Search : a collection of data, among which a given element is to be searched

```
a: ARRAY N of Item
search x
```

## Linear search

When no further information is given about the data, just look sequentially through the array one element after another.

The search is terminated if
1. the element x is found, or
2. the entire array has been scanned, and no match was found.

Each step evidently requires the incrementing of the index and the evaluation of a Boolean expression. Could this task be simplifed, and could the search thereby be accelerated? The only possibility lies in finding a simplification of the Boolean expression which notably consists of two factors. Hence, the only chance for finding a simpler solution lies in establishing a condition consisting of a single factor that implies both factors. This is possible only by guaranteeing that a match will be found, and is achieved by posting an additional element with value x at the end of the array. We call this auxiliary element a **sentinel**, because it prevents the search from passing beyond the index limit. 

## Binary search

A search can be made much more effective, if the data are ordered.

## String search



