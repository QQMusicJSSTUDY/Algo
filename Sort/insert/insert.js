function swap(array,a,b) {
    var temp;
    temp = array[a];
    array[a] = array[b];
    array[b] = temp;
}

var arr = new Array(22,12,23,56,43,98,76);
var observer = arr[0];
for (let i = 1;i < arr.length;i++){
    observer = arr[i];
    for (let j = 0; j < i; j++) {
        if (observer < arr[j]) {
            swap(arr,i,j);
        }
    }
    alert(arr);
}
alert(arr);
