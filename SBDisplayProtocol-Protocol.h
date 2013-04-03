/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Foundation/Foundation.h>

@protocol SBDisplayProtocol <NSObject>
- (id)deactivationValue:(NSUInteger)arg1;
- (BOOL)deactivationFlag:(NSUInteger)arg1;
- (void)setDeactivationSetting:(NSUInteger)arg1 value:(id)arg2;
- (void)setDeactivationSetting:(NSUInteger)arg1 flag:(BOOL)arg2;
- (void)clearDeactivationSettings;
- (id)activationValue:(NSUInteger)arg1;
- (BOOL)activationFlag:(NSUInteger)arg1;
- (void)setActivationSetting:(NSUInteger)arg1 value:(id)arg2;
- (void)setActivationSetting:(NSUInteger)arg1 flag:(BOOL)arg2;
- (void)clearActivationSettings;
- (id)displayValue:(NSUInteger)arg1;
- (BOOL)displayFlag:(NSUInteger)arg1;
- (void)setDisplaySetting:(NSUInteger)arg1 value:(id)arg2;
- (void)setDisplaySetting:(NSUInteger)arg1 flag:(BOOL)arg2;
- (void)clearDisplaySettings;
- (BOOL)expectsFaceContactInLandscape;
- (BOOL)expectsFaceContact;
- (void)setExpectsFaceContact:(BOOL)arg1 inLandscape:(BOOL)arg2;
- (void)setExpectsFaceContact:(BOOL)arg1;
- (void)deactivate;
- (void)activate;
- (double)autoLockTime;
- (double)autoDimTime;
- (BOOL)suppressesNotifications;
- (NSTimeInterval)accelerometerSampleInterval;
- (void)setAccelerometerSampleInterval:(NSTimeInterval)arg1;
- (BOOL)orientationChangedEventsEnabled;
- (void)setOrientationChangedEventsEnabled:(BOOL)arg1;
- (BOOL)allowsEventOnlySuspension;
- (NSInteger)statusBarStyle;
@end

