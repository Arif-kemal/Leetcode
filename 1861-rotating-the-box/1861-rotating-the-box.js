/**
 * @param {character[][]} box
 * @return {character[][]}
 */
var rotateTheBox = function(box) {
    const m = box.length;
    const n = box[0].length;

    // 1. ADIM: Her satır için yerçekimini uygula
    for (let r = 0; r < m; r++) {
        let emptySlot = n - 1; // En sağdan başla
        
        for (let c = n - 1; c >= 0; c--) {
            if (box[r][c] === '#') {
                // Taşı bulduk, en sondaki boşluğa taşı
                box[r][c] = '.';
                box[r][emptySlot] = '#';
                emptySlot--; 
            } else if (box[r][c] === '*') {
                // Engele çarptık, yeni boşluk engelin hemen solu
                emptySlot = c - 1;
            }
        }
    }

    // 2. ADIM: 90 derece sağa döndür (m x n -> n x m)
    let rotatedBox = Array.from({ length: n }, () => Array(m).fill('.'));

    for (let r = 0; r < m; r++) {
        for (let c = 0; c < n; c++) {
            // Formül: [r][c] -> [c][m - 1 - r]
            rotatedBox[c][m - 1 - r] = box[r][c];
        }
    }

    return rotatedBox;
};