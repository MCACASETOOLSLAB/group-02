function resizeHeader() {
	var width = window.screen.availWidth - 20;
	var height = width * 11 / 100;
	document.getElementById('header_obj').height = height + 'px';
	document.getElementById('header_wrapper').style.height = height + 'px';
}
