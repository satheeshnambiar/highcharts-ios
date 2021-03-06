/**
* (c) 2009-2017 Highsoft AS
*
* License: www.highcharts.com/license
* For commercial usage, a valid license is required. To purchase a license for Highcharts iOS, please see our website: https://shop.highsoft.com/
* In case of questions, please contact sales@highsoft.com
*/

#import "HIPlotOptionsColumnStatesHover.h"


/**
* description: A wrapper object for all the series options in specific states.
*/
@interface HIPlotOptionsColumnStates: HIChartsJSONSerializable

/**
* description: Options for the hovered series
*/
@property(nonatomic, readwrite) HIPlotOptionsColumnStatesHover *hover;

-(NSDictionary *)getParams;

@end
