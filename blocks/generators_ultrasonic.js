Blockly.JavaScript['ultrasonic_setup'] = function(block) {
  var value_echo = block.getFieldValue('ECHO');
  var value_trig = block.getFieldValue('TRIG');
  var code =
  `
  #EXTINC#include <Ultrasonic.h>#END
  #VARIABLEULTRASONIC ultrasonic;#END
  
  ultrasonic.begin(${value_echo}, ${value_trig});
  \n
  `;
  return code;
};

Blockly.JavaScript['ultrasonic_read_distance_cm'] = function(block) {
  var code = `(uint8_t)ultrasonic.read_distance_cm()`;
  return [code, Blockly.JavaScript.ORDER_NONE];
};