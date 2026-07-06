const intervals = [[1,3],[2,6],[8,10],[15,18]];
const layeredIntervals = [[1,3],[2,6],[8,10],[15,18],[5,9],[7,16],[22,45],[41,48],[23,25]];

const merge = function(intervals: number[][]) : number[][] {
    const mergedIntervals: number[][] = [];

    const sortedIntervals: number[][] = intervals.toSorted((a, b) => {
        let result: number = 0;
        
        if (a.length < b.length) {
            result = -1;
        } else {
            result = a[0] - b[0];

            if (result === 0 && a.length === 2 && b.length === 2) {
                result = a[1] - b[1];
            }
        }

        return result;
    });

    let index = 0;

    while (index < sortedIntervals.length) {
        const start: number = sortedIntervals[index][0];
        let end = sortedIntervals[index][1];

        index++;

        while(
            index < sortedIntervals.length &&
            sortedIntervals[index][0] >= start && sortedIntervals[index][0] <= end // next interval start lands in this interval range
        ) {
            end = Math.max(end, sortedIntervals[index][1]);
            index++;
        }

        mergedIntervals.push([start, end]);
    }

    return mergedIntervals;

}

console.log(merge(intervals));
console.log(merge(layeredIntervals));
