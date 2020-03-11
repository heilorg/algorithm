function submit () {
	let docs = document.querySelectorAll("input");
	let data = [];
	for(let i = 0; i < docs.length; i++){
		if(docs[i].checked){
			 data.push(docs[i].value)
		}
	}
	console.log(data);
	fetch('/submit', {
		method: 'POST',
		headers: {'Content-Type': 'application/json'},
		body: JSON.stringify({ answers: data })
	})
		.then(res => res.json())
		.then(ret => {
			if(ret){
				document.querySelector("#result").innerText = "정답입니다.";
			}else{
				document.querySelector("#result").innerText = "오답입니다.";
			}
		});
};
