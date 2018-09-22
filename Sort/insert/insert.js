/*
    插入排序的核心思想,在于将元素插入有序的序列.
    第一步:我们需要一个哨兵,这个哨兵的作用在于记录需要插入的元素,并用来和有序列元素进行比较.
    第二步:外部循环从1开始,因为从0开始没有必要,并且在外部循环,循环一次就改变哨兵的值.
    第三步:内部循环中,从0开始,因为每个有序对列都是从0开始的.
    第四步:每次内循环中,j都是小于i,因为有序队列是哨兵对象arr[i]之前比较过的元素.
    第五步:如果观察到哨兵对象比之前的有序列的元素小,就交换位置.
    第六步:直到内循环全部交换完毕,回到第二步.
    平均时间复杂度为O(n^2).
*/
var arr = new Array(22,12,23,56,43,98,76);
var observer;
for (let i = 1;i < arr.length;i++){
    observer = arr[i];
    for (let j = 0; j < i; j++) {
        if (observer < arr[j]) {
            swap(arr,i,j);
        }
    }
}
alert(arr);
