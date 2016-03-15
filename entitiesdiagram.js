Drupal.behaviors.renderDotSVG = {
  attach: function (context, settings) {
  var result = Viz(dataSVG);
  document.body.innerHTML += result;
  }
};
