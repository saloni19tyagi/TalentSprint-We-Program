const rl = require('readline');

const readInterface = rl.createInterface({
    input: process.stdin,
    output: process.stdout
})

const isAmbiguous = (inputDate) => {
    const dateStringArray = inputDate.split("/");
    let first = dateStringArray[0];
    let second = dateStringArray[1];

    if (first <= 12 && second <= 12) {
        return true;
    }
    return false;
}

readInterface.question("Enter date String: ", (inputDate) => {

    if (isAmbiguous(inputDate)) {
        console.log("Date is ambiguous");
    }
    else {
        console.log("Date is not ambiguous");
    }
    readInterface.close();
})