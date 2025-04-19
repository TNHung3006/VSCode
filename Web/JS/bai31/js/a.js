$(document).ready(function(){
    $('button').click(function(){
        txt = $('input').val();
        d = new Date();
        alert('hello')
        st = '<p>' + txt + ' - ' + d.getHours() + ':' + d.getMinutes() + ':' + d.getDate() + '/' + (d.getMonth() + 1) + '/' + d.getFullYear() ;
        alert(st) + '</p>';
        $('div').prepend(st); //chèn về phía trước
        $('div').before(st);
    });
});