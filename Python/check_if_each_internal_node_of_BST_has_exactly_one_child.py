def hasOnlyOneChild(pre,size):
    min=0; max=0
    if pre[size-1] > pre[size-2] :
        max = pre[size-1]
        min = pre[size-2]
    else :
        max = pre[size-2]
        min = pre[size-1]
    for i in range(size-3, 0, -1):
        if pre[i] < min:
            min = pre[i]
        elif pre[i] > max:
            max = pre[i]
        else:
            return False
    return True
  
# Main
if __name__ == "__main__":
    pre = [8, 3, 5, 7, 6]
    size = len(pre)
    if (hasOnlyOneChild(pre, size)):
        print("Yes")
    else:
        print("No")
