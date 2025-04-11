addToLibrary({

render: function(commands, size) {
    console.log('commands: ' + commands);
    console.log('size: ' + size);

    var v = new Module.command_vector_t(commands);
    console.log('count: ' + v.get(0).count);
},

});
