
function swap(array,a,b) {
    var temp;
    temp = array[a];
    array[a] = array[b];
    array[b] = temp;
}

var arr = new Array(12,23,56,43,98,76);
alert(arr);
var length = arr.length;
for (var i = 0;i < length;i++){
    for (let j = 0; j < arr.length - 1 - i; j++) {
        if (arr[j]>arr[j+1]) {
            swap(arr,j,j+1);
        }
    }
}
alert(arr);