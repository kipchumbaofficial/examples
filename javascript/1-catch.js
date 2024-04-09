 function getMonth(mo) {
     mo--;
     months = ['January', 'February', 'March', 'April', 'May', 'June', 'July', 'August', 'September', 'October', 'November', 'December'];

     if (months[mo]) {
         return months[mo];
     } else {
         throw new Error("InvalidMonthNo");
     }
 }

try {
    let month = getMonth(1);
    console.log(`Month selected is ${month}`)
    month = getMonth("30");
    month = getMonth(2);
} catch(e) {
    month = "UnknownMonth";
    console.log(month);
}   
