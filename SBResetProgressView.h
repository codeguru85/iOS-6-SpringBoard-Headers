/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIColor, UIBezierPath;

__attribute__((visibility("hidden")))
@interface SBResetProgressView : XXUnknownSuperclass {
	UIColor* _progressColor;
	UIBezierPath* _path;
	float _resetProgress;
}
-(void)drawRect:(CGRect)rect;
-(id)_progressColor;
-(id)_outlinePath;
-(void)setResetProgress:(float)progress;
-(void)dealloc;
@end
