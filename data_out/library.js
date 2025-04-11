addToLibrary({

render: function(commands_addr, size) {
    console.log('commands_addr: ' + commands_addr);
    console.log('size: ' + size);

    var commands = [];

    for (let i = 0; i < size; i++) {
        let count = HEAP32[(commands_addr >> 2) + i * 3];           
        let index_buffer_offset = HEAP32[(commands_addr >> 2) + i * 3 + 1];  
        let vertex_buffer_offset = HEAP32[(commands_addr >> 2) + i * 3 + 2];
        
        commands.push([count, index_buffer_offset, vertex_buffer_offset]);
    }
    
    console.log(commands);
},

});
