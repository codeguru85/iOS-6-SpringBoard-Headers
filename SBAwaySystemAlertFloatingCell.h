/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBAwaySystemAlertCell.h"


__attribute__((visibility("hidden")))
@interface SBAwaySystemAlertFloatingCell : SBAwaySystemAlertCell {
}
+(float)_cellContentExtraPadding;
+(float)_cellContentTopPadding;
+(float)_cellContentRightPadding;
+(float)_cellContentLeftPadding;
+(float)_buttonVerticalInset;
+(float)_buttonHorizontalInset;
+(id)_buttonFont;
+(id)_cancelButtonBackgroundImage;
+(id)_buttonBackgroundImage;
+(id)_alarmButtonBackgroundImage;
+(float)rowHeightForTitle:(id)title message:(id)message rowWidth:(float)width buttonLabels:(id)labels;
+(float)_rowHeightForContentHeight:(float)contentHeight;
-(void)layoutSubviews;
-(void)_clearButtonHandler;
-(void)_getButtonWidth:(float*)width inset:(float*)inset;
-(CGRect)_cellContentViewFrame;
-(CGRect)_contentRect;
-(BOOL)_drawsSeparator;
-(void)setButtonLabels:(id)labels handler:(id)handler isAlarm:(BOOL)alarm;
-(void)setIconImage:(id)image;
-(BOOL)_hasBackgroundColor;
-(void)_createContentView;
@end
