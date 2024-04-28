
function updateTime() {
    var xhr = new XMLHttpRequest();
    xhr.onreadystatechange = function () {
        if (xhr.readyState == 4 && xhr.status == 200) {
            document.getElementById("time").innerHTML = xhr.responseText;
        }
    };
    xhr.open("GET", "current_time.txt", true);
    xhr.send();
}

setInterval(updateTime, 1000); // Update time every second
