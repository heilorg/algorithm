const challenge = {
  /*
   * addData 함수를 완성시켜주세요.
   */
  addData: async function(name, description) {
    // 먼저 서버 쪽에 데이터를 등록합니다.
    //
    fetch('/api/todolist', {
      method: 'PUT',
      headers: {
        'Content-Type': 'application/json'
      },
      body: JSON.stringify({
					name, description
      })
    }).then(function(response) {
      return response.json();
    }).then(function(data) {
      // Table에 새 데이터를 넣어 보여줍니다.
      //
			let table = document.createElement("table");
			table.innerHTML = `<tr index='${data}'><td>${name}</td><td>${description}</td><td><a class='removeBtn waves-effect waves-light btn-small'>삭제</td></tr>`;
			document.querySelector("table tbody").append(table.firstChild.firstChild);
    });
  },

  /*
   * removeData 함수를 완성시켜주세요.
   */
  removeData: function(index) {
    // 먼저 서버 쪽에 데이터 삭제 요청을 합니다.
    //
    fetch(`/api/todolist/${index}`, {
      method: 'DELETE',
      headers: {
        'Content-Type': 'application/json'
      },
      body: JSON.stringify({})
    }).then(function(response) {
      return response.json();
    }).then(function(data) {
      // Table에서 index 값으로 찾아 데이터를 삭제해줍니다.
      //
document.querySelector("table tbody").removeChild(document.querySelector(`tr[index='${index}']`));
    });
  }
}