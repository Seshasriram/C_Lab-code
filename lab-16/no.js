const readline = require('readline');

// Set up interface for input
const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

// Function to print the pattern
function printPattern(rows) {
    for (let i = 1; i <= rows; ++i) {
        let rowPattern = '';
        for (let j = 1; j <= i; ++j) {
            rowPattern += '$ ';
        }
        console.log(rowPattern);
    }
}

// Ask the user for the number of rows
rl.question('Enter the number of rows: ', (input) => {
    const rows = parseInt(input, 10);

    if (isNaN(rows)) {
        console.log('Please enter a valid number');
    } else {
        printPattern(rows);
    }

    // Close the interface
    rl.close();
});
