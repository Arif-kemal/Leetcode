function minPathSum(grid: number[][]): number {
    /*dinamik proglama ile çözücez
        kendini tekrar eden kucuk problemlere bolup
        bu kucuk problemleri cozup bunlari kaydedicez
        grid'in dısındakiler infinit yani sonsuz
        diger karelerin bedeli ise sol veya ustundeki sayilerdakinin
        minumum bedeli misal 00 bunun bedeli sadece uzerindeki 1
        01 bunun bedeli 1+3 10 bunun bedeli 1+3+1 seklinde o kutulari doldurucaz */
    const rows=grid.length;
    const columns=grid[0].length;

    for(let i=0;i<rows;i++){
        for(let j=0;j<columns;j++){
            if(i===0&&j===0){continue;}

            const top=i>0?grid[i-1][j]:Infinity;
            const left=j>0?grid[i][j-1]:Infinity;

            grid[i][j]+=Math.min(top,left);
        }
    } 
    return grid[rows-1][columns-1];   
};