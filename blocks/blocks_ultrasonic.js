Blockly.Blocks['ultrasonic_setup'] = {
  init: function() {
    this.appendDummyInput()
        .appendField("Ultrasonic setup (")
        .appendField(new Blockly.FieldTextInput("4"), "ECHO")
        .appendField(",")
        .appendField(new Blockly.FieldTextInput("5"), "TRIG")
        .appendField(")");
    this.setPreviousStatement(true, null);
    this.setNextStatement(true, null);
    this.setColour(120);
    this.setTooltip("");
    this.setHelpUrl("");
  }
};

Blockly.Blocks['ultrasonic_read_distance_cm'] = {
  init: function() {
    this.appendDummyInput()
        .appendField("Ultrasonic read distance (cm)");
    this.setOutput(true, "Number");
    this.setColour(120);
    this.setTooltip("");
    this.setHelpUrl("");
  }
};
