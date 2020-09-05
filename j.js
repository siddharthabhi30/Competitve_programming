selection=0;

let length=arr.length;
let index=-1;
let cnt=0;



function outt(){
    console.log(cnt,"sd");
    if(index==arr.length-1){
        done();
        return;
      }
      index=index+1;
      console.log(index);
   
   document.getElementsByClassName("option1")[0].innerHTML=arr[index].options[0];
   document.getElementsByClassName("option2")[0].innerHTML=arr[index].options[1];
   document.getElementsByClassName("option3")[0].innerHTML=arr[index].options[2];
   document.getElementsByClassName("option4")[0].innerHTML=arr[index].options[3];
   document.getElementsByClassName("question")[0].innerHTML=arr[index].description;
}

function fu1(){

 

  selection=1;
  console.log(arr[index].answer);
  if(selection==(arr[index].answer)){
    cnt=cnt+1;
  }
  outt();
}

function fu2(){
  
 
 
  selection=2;
  if(selection==arr[index].answer){
    cnt=cnt+1;
  }
  outt();
}

function fu3(){

 
  selection=3;
  if(selection==arr[index].answer){
    cnt=cnt+1;
  }
  outt();
}
 
function fu4(){
 
 
  selection=3;
  if(selection==arr[index].answer){
    cnt=cnt+1;
  }
  outt();
}
 
function back(){
  if(index==0){
    alert('try to go forward in life');
  }
  else{
    index=index-2;
   
  }
  outt();

}



function hide(){
    document.getElementsByClassName("fadeOut")[0].classList="container";
  document.getElementsByClassName("intro")[0].classList="fadeOut";
outt();
}




function done(){
  if(cnt==20){
    alert('your score is '+cnt +"  out of 20 good job");
}
else{
  alert('your score is '+cnt +"  out of 20 you failed , are you fucking stupid or what");

}
alert("this program can be broken ,try");
 }

  