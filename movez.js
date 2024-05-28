function moveZeros(array) {
    let length = array.length,
        i = length;

    while (--i) {
        if (array[i] !== 0) continue;
        length--;
        while (i < length) {
            [array[i + 1], array[i]] = [array[i], array[i + 1]];
            i++;
        }
    }
    return array;
}

