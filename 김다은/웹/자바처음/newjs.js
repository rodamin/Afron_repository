function button1_click(){
var input1 = prompt('알고싶은 단을 입력하세요');
var i;

	if(input1 > 0){
		for(i=1;i<10;i=i+1){
			alert(input1 + '*'+ i + '=' + input1*i);
		}
	}else{
		alert("오류 : 1이상의 값을 입력하세요");
	}
}

function button2_click(){
var input2 = prompt('알고싶은 숫자를 입력하세요');

	if(input2 > 0){
		if(input2%2==0)
			alert("짝수입니다");
		else
			alert("홀수입니다");
	}else
		alert("오류 : 1이상의 값을 입력하세요");
}