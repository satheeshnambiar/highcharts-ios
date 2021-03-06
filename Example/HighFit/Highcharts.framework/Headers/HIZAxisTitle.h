/**
* (c) 2009-2017 Highsoft AS
*
* License: www.highcharts.com/license
* For commercial usage, a valid license is required. To purchase a license for Highcharts iOS, please see our website: https://shop.highsoft.com/
* In case of questions, please contact sales@highsoft.com
*/

#import "HIChartsJSONSerializable.h"


/**
* description: The axis title, showing next to the axis line.
*/
@interface HIZAxisTitle: HIChartsJSONSerializable

/**
* description: The actual text of the axis title. It can contain basic HTML text markup like <b>, <i> and spans with style.
* demo: http://jsfiddle.net/gh/get/jquery/3.1.1/highcharts/highcharts/tree/master/samples/highcharts/xaxis/title-text/ : Custom HTML title for X axis
*/
@property(nonatomic, readwrite) NSString *text;
/**
* description: Alignment of the title relative to the axis values. Possible values
 are "low", "middle" or "high".
* demo: X axis title aligned http://jsfiddle.net/gh/get/jquery/3.1.1/highcharts/highcharts/tree/master/samples/highcharts/xaxis/title-align-low/ : "low",
			http://jsfiddle.net/gh/get/jquery/3.1.1/highcharts/highcharts/tree/master/samples/highcharts/xaxis/title-align-center/ : "middle" by default, 
			http://jsfiddle.net/gh/get/jquery/3.1.1/highcharts/highcharts/tree/master/samples/highcharts/xaxis/title-align-high/ : "high", 
			http://jsfiddle.net/gh/get/jquery/3.1.1/highcharts/highcharts/tree/master/samples/highcharts/yaxis/title-offset/ : place the Y axis title on top of the axis
* accepted values: ["low", "middle", "high"]
* default: middle
*/
@property(nonatomic, readwrite) NSString *align;
/**
* description: Deprecated. Set the text to null to disable the title.
* default: middle
*/
@property(nonatomic, readwrite) NSString *enabled;
/**
* description: CSS styles for the title. When titles are rotated they are rendered using vector graphic techniques and not all styles are applicable.
In http://www.highcharts.com/docs/chart-design-and-style/style-by-css : styled mode, the stroke width is given in the .highcharts-axis-title class.
* demo: http://jsfiddle.net/gh/get/jquery/3.1.1/highcharts/highcharts/tree/master/samples/highcharts/xaxis/title-style/ : Red Y axis title.

http://jsfiddle.net/gh/get/jquery/3.1.1/highcharts/highcharts/tree/master/samples/highcharts/css/axis/ : Styled mode.

* default: { "color": "#666666" }
*/
@property(nonatomic, readwrite) NSDictionary /* <NSString, NSString> */ *style;
/**
* description: Horizontal pixel offset of the title position.
* default: 0
*/
@property(nonatomic, readwrite) NSNumber *x;
/**
* description: Vertical pixel offset of the title position.
*/
@property(nonatomic, readwrite) NSNumber *y;
/**
* description: The pixel distance between the axis labels or line and the title. Defaults to 0 for horizontal axes, 10 for vertical
* demo: http://jsfiddle.net/gh/get/jquery/3.1.1/highcharts/highcharts/tree/master/samples/highcharts/xaxis/title-margin/ : Y axis title margin of 60
*/
@property(nonatomic, readwrite) NSNumber *margin;
/**
* description: The rotation of the text in degrees. 0 is horizontal, 270 is vertical reading from bottom to top.
* demo: http://jsfiddle.net/gh/get/jquery/3.1.1/highcharts/highcharts/tree/master/samples/highcharts/yaxis/title-offset/ : Horizontal Y axis title
* default: 0
*/
@property(nonatomic, readwrite) NSNumber *rotation;
/**
* description: The distance of the axis title from the axis line. By default, this distance is  computed from the offset width of the labels, the labels' distance from  the axis and the title's margin. However when the offset option is set, it overrides all this.
* demo: http://jsfiddle.net/gh/get/jquery/3.1.1/highcharts/highcharts/tree/master/samples/highcharts/yaxis/title-offset/ : Place the axis title on top of the axis
*/
@property(nonatomic, readwrite) NSNumber *offset;

-(NSDictionary *)getParams;

@end
