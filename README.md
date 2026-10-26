# Remove Element

## Problem Description

Given an integer array `nums` and an integer `item`, remove all occurrences of `item` **in-place** and return the number of elements that are **not equal** to `item`.

Let this number be `k`. To be accepted:

- The first `k` elements of `nums` must contain all the elements that are not equal to `val`.
- The order of those elements may be changed.
- Elements after index `k - 1` do not matter, and the size of `nums` does not need to change.
- Return `k`.

## Examples

### Example 1

**Input:**

```text
nums = [3, 2, 2, 3]
val = 3
```

**Output:**

```text
k = 2
nums = [2, 2, _, _]
```

**Explanation:** The first two positions contain `2` and `2`. The values after them are irrelevant.

### Example 2

**Input:**

```text
nums = [0, 1, 2, 2, 3, 0, 4, 2]
val = 2
```

**Output (one valid arrangement):**

```text
k = 5
nums = [0, 1, 3, 0, 4, _, _, _]
```

**Explanation:** The first five positions contain `0`, `0`, `1`, `3`, and `4` in any order.

> `_` means the value at that position is not checked; it does not mean the vector actually contains an underscore.

## Constraints

- `0 <= nums.length <= 100`
- `0 <= nums[i] <= 50`
- `0 <= val <= 100`
