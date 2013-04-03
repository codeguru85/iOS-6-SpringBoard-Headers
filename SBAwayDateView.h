/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class NSString, NSTimer, SBAwayMediaControlsView, TPLCDTextView, UILabel;

@interface SBAwayDateView : UIView
{
    NSTimer *_dateTimer;
    TPLCDTextView *_timeLabel;
    TPLCDTextView *_dateAndTetheringLabel;
    NSString *_title;
    NSString *_artist;
    NSString *_album;
    UILabel *_nowPlayingTitleLabel;
    UILabel *_nowPlayingArtistLabel;
    UILabel *_nowPlayingAlbumLabel;
    SBAwayMediaControlsView *_controlsView;
    id <SBAwayDateViewDelegate> _delegate;
    int _orientation;
    unsigned int _isPlaying:1;
}

@property(nonatomic) int orientation; // @synthesize orientation=_orientation;
@property(nonatomic) id <SBAwayDateViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isPlaying) BOOL playing;
- (BOOL)isMediaControlsShowingOverlays;
- (BOOL)isShowingControls;
- (void)dismissMediaControlsOverlaysAnimated:(BOOL)arg1;
- (void)setIsShowingControls:(BOOL)arg1;
- (void)_tearDownMediaControlsView;
- (id)controlsView;
- (void)didMoveToSuperview;
- (void)setVisible:(BOOL)arg1;
- (void)removeFromSuperview;
- (void)setAlbum:(id)arg1;
- (void)setArtist:(id)arg1;
@property(retain, nonatomic) NSString *title;
- (void)updateClock;
- (void)updateClockFormat;
- (void)_createFormattersIfNecessary;
- (void)update;
- (void)resizeAndPositionNowPlayingLabels;
- (id)newNowPlayingLabelWithFont:(id)arg1 color:(id)arg2;
- (id)labelWithFontSize:(float)arg1 origin:(struct CGPoint)arg2;
- (id)labelWithFontSize:(float)arg1 origin:(struct CGPoint)arg2 fontName:(const char *)arg3;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

