/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class SBResetProgressView, NSTimer;

__attribute__((visibility("hidden")))
@interface SBResetView : XXUnknownSuperclass {
	SBResetProgressView* _progressView;
	NSTimer* _progressTimer;
}
-(void)_updateProgress;
-(void)_resetFinished:(id)finished;
-(void)_resetStarted:(id)started;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end
