/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "MCProfileConnectionObserver-Protocol.h"

@class SBAppContextHostManager, SBApplication, SBUIController;

@interface SpringBoard : UIApplication <MCProfileConnectionObserver, UIApplicationDelegate>
{
    SBUIController *_uiController;
    NSTimer *_menuButtonTimer;
    NSTimer *_lockButtonTimer;
    NSTimer *_idleTimer;
    NSTimer *_autoLockTimer;
    double _lastUndimEventTime;
    double _lastTimeIdleCausedDim;
    double _nextLockDurationAfterDim;
    double _headsetButtonDownTime;
    struct __GSEvent *_headsetDownEvent;
    int _headsetClickCount;
    int _ringerSwitchState;
    unsigned int _headsetButtonClickCount:8;
    unsigned int _menuButtonClickCount:8;
    unsigned int _screenWasDimOnMenuDown:1;
    unsigned int _waitingForMenuDoubleTapAfterActingOnSingleTap:1;
    unsigned int _screenshotWasTaken:1;
    unsigned int _disableAutoDimming:1;
    unsigned int _dontLockOnNextLockUp:1;
    unsigned int _poweringDown:1;
    unsigned int _headsetDownDelayedActionPerformed:1;
    unsigned int _isSeekingInMedia:1;
    int _statusBarOrientationOverride;
    unsigned int _lockScreenCameraWantsIdleTimerDisabled:1;
    int _mediaSeekDirection;
    float _currentBacklightLevel;
    unsigned int _springBoardRequestsAccelerometerEvents;
    int _activeInterfaceOrientation;
    NSMutableSet *_activeInterfaceOrientationObservers;
    BOOL _wantsOrientationEvents;
    int _notifyDontAnimateREOToken;
    int _notifyDontAllowMediaHUDToken;
    BOOL _expectsFaceContact;
    BOOL _expectsFaceContactInLandscape;
    BOOL _proximityEventsEnabled;
    BOOL _clamshellClosed;
    BOOL _keybagRefetchTransactionIsActive;
    NSSet *_restrictionDisabledApplications;
    SBApplication *_nowPlayingApp;
    SBApplication *_menuButtonInterceptApp;
    BOOL _menuButtonInterceptAppEnabledForever;
    NSMutableArray *_disableNowPlayingHUDAssertionBundleIds;
    NSMutableArray *_appsRegisteredForVolumeEvents;
    NSNumberFormatter *_decimalFormatter;
    NSNumberFormatter *_percentFormatter;
    NSTimer *_midnightTimer;
    NSDate *_midnightFireDate;
    struct _opaque_pthread_t *_backgroundMIGServerThread;
    struct _opaque_pthread_t *_iconGenerationMIGServerThread;
    struct _opaque_pthread_t *_systemGesturesHIDThread;
    SBAppContextHostManager *_springBoardContextHostManager;
    UIWindow *_springBoardContextHostWindow;
    NSMutableSet *_idleTimerDisabledReasons;
    // NSObject<OS_dispatch_source> *_memoryPressureSource;
    unsigned int _memoryPressureStatus;
    NSMutableArray *_blocksAwaitingAvailableMemory;
}

+ (BOOL)rendersLocally;
+ (BOOL)registerAsSystemApp;
- (void)noteKeybagRefetchTransactionIsActive:(BOOL)arg1;
- (BOOL)underMemoryPressure;
- (void)_setStatusBarShowsProgress:(BOOL)arg1;
- (BOOL)_isSwitcherShowing;
- (void)_accessibilityDeactivationAnimationWillBegin;
- (double)_accessibilityDeactivationAnimationStartDelay;
- (void)_accessibilityActivationAnimationWillBegin;
- (double)_accessibilityActivationAnimationStartDelay;
- (BOOL)_accessibilityObjectWithinProximity;
- (BOOL)_accessibilityIsSystemGestureActive;
- (void)_accessibilitySetSystemGesturesDisabledByAccessibility:(BOOL)arg1;
- (BOOL)_accessibilitySystemGesturesDisabledByAccessibility;
- (BOOL)_accessibilityShouldAllowIconLaunch;
- (BOOL)_accessibilityShouldAllowAppLaunch;
- (id)_accessibilityRunningApplications;
- (id)_accessibilityTopDisplay;
- (id)_accessibilityFrontMostApplication;
- (id)formattedPercentStringForNumber:(id)arg1;
- (id)formattedDecimalStringForNumber:(id)arg1;
- (BOOL)isCameraApp;
- (void)setSuspensionAnimationDelay:(double)arg1;
- (id)idleTimerDisabledReasons;
- (void)setIdleTimerDisabled:(BOOL)arg1 forReason:(id)arg2;
- (void)setIdleTimerDisabled:(BOOL)arg1;
- (void)setNowPlayingInfo:(id)arg1 forApplication:(id)arg2;
- (BOOL)isMusicPlayerPlaying;
- (BOOL)isNowPlayingAppPlaying;
- (id)nowPlayingApp;
- (BOOL)isMusicPlayerInNowPlayingView;
- (void)_nowPlayingAppDidChangeNotification:(id)arg1;
- (void)tearDown;
- (void)_tearDownNow;
- (BOOL)launchApplicationWithIdentifier:(id)arg1 suspended:(BOOL)arg2;
- (void)_launchMusicPlayerSuspendedAndStartMusic;
- (void)launchMusicPlayerSuspended;
- (int)alertInterfaceOrientation;
- (BOOL)isLocked;
- (BOOL)canShowAlerts;
- (void)setHasMiniAlerts:(BOOL)arg1;
- (void)willDismissMiniAlert;
- (void)willDisplayMiniAlert;
- (void)didDismissMiniAlert;
- (void)didDismissActionSheet;
- (void)applicationDidOrderOutContext:(id)arg1;
- (void)applicationWillOrderInContext:(id)arg1 windowLevel:(float)arg2 windowOutput:(int)arg3;
- (void)frontDisplayDidChange;
- (void)updateOrientationAndAccelerometerSettings;
- (void)updateProximitySettings;
- (void)setExpectsFaceContact:(BOOL)arg1;
- (void)setExpectsFaceContact:(BOOL)arg1 inLandscape:(BOOL)arg2;
- (BOOL)expectsFaceContactInLandscape;
- (BOOL)expectsFaceContact;
- (void)setProximityEventsEnabled:(BOOL)arg1;
- (BOOL)proximityEventsEnabled;
- (void)setSystemVolumeHUDEnabled:(BOOL)arg1 forAudioCategory:(id)arg2;
- (double)windowRotationDuration;
- (BOOL)_alertWindowShouldRotate;
- (id)displayIDForURLScheme:(id)arg1 isPublic:(BOOL)arg2;
- (void)_removeDefaultInterfaceOrientatationOverride;
- (void)_overrideDefaultInterfaceOrientationWithOrientation:(int)arg1;
- (int)statusBarOrientation;
- (void)reportStatusBarOrientationAs:(int)arg1;
- (int)interfaceOrientationForCurrentDeviceOrientation;
- (int)_currentNonFlatDeviceOrientation;
- (void)updateNativeOrientationAndMirroredDisplays:(BOOL)arg1;
- (void)updateNativeOrientation;
- (void)setWantsOrientationEvents:(BOOL)arg1;
- (int)_frontMostAppOrientation;
- (int)activeInterfaceOrientationWithoutConsideringAlerts;
- (int)activeInterfaceOrientation;
- (void)removeActiveOrientationObserver:(id)arg1;
- (void)addActiveOrientationObserver:(id)arg1;
- (void)noteAlertView:(id)arg1 willChangeInterfaceOrientation:(int)arg2 duration:(double)arg3;
- (void)noteInterfaceOrientationChanged:(int)arg1 duration:(float)arg2 updateMirroredDisplays:(BOOL)arg3 force:(BOOL)arg4;
- (void)noteInterfaceOrientationChanged:(int)arg1 duration:(float)arg2 updateMirroredDisplays:(BOOL)arg3;
- (void)noteInterfaceOrientationChanged:(int)arg1 duration:(float)arg2;
- (void)noteInterfaceOrientationChanged:(int)arg1 force:(BOOL)arg2;
- (void)noteInterfaceOrientationChanged:(int)arg1;
- (void)updateMirroredDisplayOrientation;
- (void)noteSubstantialTransitionOccured;
- (void)didReceiveMemoryWarning;
- (void)lockDevice:(struct __GSEvent *)arg1;
- (void)updateRejectedInputSettingsTriggeredByRouteChangeToReceiverNotification:(BOOL)arg1;
- (void)updateRejectedInputSettings;
- (void)updateRejectedInputSettingsForInCallState:(BOOL)arg1 isOutgoing:(BOOL)arg2;
- (void)_updateRejectedInputSettingsForInCallState:(BOOL)arg1 isOutgoing:(BOOL)arg2 triggeredbyRouteWillChangeToReceiverNotification:(BOOL)arg3;
- (void)_userEventPresenceTimerExpired;
- (void)_userEventOccurred;
- (void)_userEventsDidIdle;
- (BOOL)_awayControllerWantsUserEventNotifications;
- (void)_caseLatchWantsToAttemptLock;
- (void)noteCaseHardwarePresent;
- (void)_keyboardOrCaseLatchWantsToAttemptUnlock:(int)arg1;
- (BOOL)allowCaseLatchLockAndUnlock;
- (BOOL)caseIsEnabledAndLatched;
- (void)clamshellDidClose:(struct __GSEvent *)arg1;
- (void)clamshellDidOpen:(struct __GSEvent *)arg1;
- (void)_proximityChanged:(id)arg1;
- (void)resetIdleTimerAndUndim:(BOOL)arg1;
- (void)resetIdleTimerAndUndim;
- (void)clearIdleTimer;
- (void)_clearAutoLockTimer;
- (double)nextLockTimeDuration;
- (double)nextIdleTimeDuration;
- (void)didIdle;
- (void)autoLock;
- (void)lockAfterCall;
- (void)undim;
- (void)setBacklightFactorToZeroAfterDelay;
- (void)cancelSetBacklightFactorToZeroAfterDelay;
- (void)setBacklightFactorToZero;
- (void)_adjustMidnightTimerAfterSleep;
- (void)_midnightPassed;
- (void)setupMidnightTimer;
- (void)systemWillSleep;
- (void)animateBacklightToFactor:(float)arg1 duration:(double)arg2 didFinishTarget:(id)arg3 selector:(SEL)arg4;
- (void)setBacklightFactor:(float)arg1;
- (void)setBacklightFactorPending:(float)arg1;
- (void)volumeChanged:(struct __GSEvent *)arg1;
- (id)appsRegisteredForVolumeEvents;
- (void)setAppRegisteredForVolumeEvents:(id)arg1 isActive:(BOOL)arg2;
- (void)setWantsVolumeButtonEvents:(BOOL)arg1;
- (BOOL)menuButtonInterceptAppEnabledForever;
- (id)menuButtonInterceptApp;
- (void)setMenuButtonInterceptApp:(id)arg1 forever:(BOOL)arg2;
- (BOOL)openURL:(id)arg1;
- (BOOL)canOpenURL:(id)arg1;
- (void)_openURLCore:(id)arg1 display:(id)arg2 animating:(BOOL)arg3 sender:(id)arg4 additionalActivationFlags:(id)arg5;
- (void)_applicationOpenURL:(id)arg1 withApplication:(id)arg2 sender:(id)arg3 publicURLsOnly:(BOOL)arg4 animating:(BOOL)arg5 additionalActivationFlags:(id)arg6;
- (void)applicationOpenURL:(id)arg1 withApplication:(id)arg2 sender:(id)arg3 publicURLsOnly:(BOOL)arg4 animating:(BOOL)arg5 needsPermission:(BOOL)arg6 additionalActivationFlags:(id)arg7;
- (void)applicationOpenURL:(id)arg1 publicURLsOnly:(BOOL)arg2;
- (void)applicationOpenURL:(id)arg1;
- (BOOL)applicationCanOpenURL:(id)arg1 publicURLsOnly:(BOOL)arg2;
- (BOOL)_URLIsHandledBySpringBoard:(id)arg1;
- (void)_applicationOpenURL:(id)arg1 event:(struct __GSEvent *)arg2;
- (void)handleOpenURL:(id)arg1 fromApplication:(id)arg2;
- (BOOL)_requestPermissionToOpenURL:(id)arg1 withApplication:(id)arg2 sender:(id)arg3;
- (void)showAlertForUnhandledURL:(id)arg1 error:(int)arg2;
- (id)metaHostWindow;
- (id)metaHostView;
- (BOOL)isMetaHostingEnabled;
- (void)setMetaHostingEnabled:(BOOL)arg1;
- (void)showSpringBoardStatusBar;
- (void)hideSpringBoardStatusBar;
- (int)statusBar:(id)arg1 styleForRequestedStyle:(int)arg2 overrides:(int)arg3;
- (void)statusBarReturnActionTap:(struct __GSEvent *)arg1;
- (void)applicationSuspendedSettingsUpdated:(struct __GSEvent *)arg1;
- (void)applicationSuspended:(struct __GSEvent *)arg1;
- (void)applicationSuspend:(struct __GSEvent *)arg1;
- (void)anotherApplicationFinishedLaunching:(struct __GSEvent *)arg1;
- (void)applicationExited:(struct __GSEvent *)arg1;
- (void)quitTopApplication:(struct __GSEvent *)arg1;
- (unsigned int)_frontmostApplicationPort;
- (void)accessoryKeyStateChanged:(struct __GSEvent *)arg1;
- (void)_updateRingerState:(int)arg1 withVisuals:(BOOL)arg2 updatePreferenceRegister:(BOOL)arg3;
- (void)ringerChanged:(int)arg1;
- (void)profileConnectionDidReceivePasscodePolicyChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)pinPolicyChanged;
- (void)autoLockPrefsChanged;
- (void)localeChanged;
- (void)_localeChanged;
- (void)debuggingAndDemoPrefsWereChanged;
- (void)loadDebuggingAndDemoPrefs;
- (BOOL)isDisplayIdentifierRestrictionDisabled:(id)arg1;
- (void)updateCapabilitiesAndIconVisibility;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)smsPrefsChanged;
- (void)headsetAvailabilityChanged:(struct __GSEvent *)arg1;
- (void)headsetButtonUp:(struct __GSEvent *)arg1;
- (void)headsetButtonDown:(struct __GSEvent *)arg1;
- (void)_setDeferredHeadsetButtonDownEvent:(struct __GSEvent *)arg1;
- (void)_imagesMounted;
- (void)_iapExtendedModeReset;
- (void)_iapServerConnectionDiedNotification:(id)arg1;
- (id)simpleRemoteDestinationApp;
- (void)_performDelayedHeadsetClickTimeout;
- (void)lockButtonUp:(struct __GSEvent *)arg1;
- (void)_relaunchSpringBoardNow;
- (void)relaunchSpringBoard;
- (BOOL)relaunchingForSetupLanguageChange;
- (void)powerDownCanceled:(id)arg1;
- (void)_powerDownCancel:(id)arg1 withCompletion:(id)arg2;
- (void)powerDownRequested:(id)arg1;
- (BOOL)isPoweringDown;
- (void)powerDown;
- (void)reboot;
- (void)_rebootNow;
- (void)_powerDownNow;
- (void)extendButtonTimersForWake;
- (void)lockButtonWasHeld;
- (void)lockButtonDown:(struct __GSEvent *)arg1;
- (void)_handleMenuButtonEvent;
- (void)mediaKeyUp:(struct __GSEvent *)arg1;
- (void)mediaKeyDown:(struct __GSEvent *)arg1;
- (void)_startSeekWithDirection:(id)arg1;
- (void)_keyboardAvailabilityChanged;
- (void)_giveUpOnMenuDoubleTap;
- (void)menuButtonUp:(struct __GSEvent *)arg1;
- (BOOL)_isDim;
- (void)menuButtonDown:(struct __GSEvent *)arg1;
- (double)_menuHoldTime;
- (void)_menuButtonWasHeld;
- (void)clearMenuButtonTimer;
- (void)cancelMenuButtonRequests;
- (void)_setLockButtonTimer:(id)arg1;
- (void)_setMenuButtonTimer:(id)arg1;
- (void)handleMenuDoubleTap;
- (void)goToSpotlight:(BOOL)arg1;
- (BOOL)isMenuDoubleTapAllowed;
- (void)setAppDisabledNowPlayingHUD:(BOOL)arg1 bundleIdentifier:(id)arg2;
- (BOOL)canShowLockScreenCameraGrabber;
- (BOOL)lockScreenCameraSupported;
- (BOOL)canShowLockScreenHUDControls;
- (BOOL)iapIsInExtendedMode;
- (BOOL)shouldRunFieldTestScript;
- (void)batteryStatusDidChange:(id)arg1;
- (void)significantTimeChange;
- (void)_significantTimeChange;
- (void)runFieldTestScript;
- (void)_testPhoneAlerts;
- (void)_lockdownActivationChanged:(id)arg1;
- (void)userDefaultsDidChange:(id)arg1;
- (void)_reloadDemoAndDebuggingDefaultsAndCapabilities;
- (void)_effectiveSettingsDidChange;
- (void)showEDGEActivationFailureAlert:(id)arg1 reason:(id)arg2 forMMS:(BOOL)arg3;
- (void)checkPasscodeCompliance;
- (void)wipeDeviceNow;
- (void)_rotateView:(id)arg1 toOrientation:(int)arg2;
- (void)languageChanged;
- (BOOL)restartedForLanguageChangeWhileUnlocked;
- (id)_settingLanguageStringForNewLanguage;
- (void)clearLaunchedAfterLanguageRestart;
- (BOOL)launchedAfterLanguageRestart;
- (void)appleIconViewRemoved;
- (void)applicationDidFinishLaunching:(id)arg1;
- (void)_performDeferredLaunchWork;
- (BOOL)isBBServerRunning;
- (void)_startBulletinBoardServer;
- (void)updateStackshotSettings;
- (void)setHardwareKeyboardLayoutName:(id)arg1;
- (void)handleKeyEvent:(struct __GSEvent *)arg1;
- (BOOL)_shouldSwallowKeyEvent:(struct __GSEvent *)arg1;
- (void)writeLogFile;
- (void)_createLogFile;
- (void)handleSignal:(int)arg1;
- (id)init;
- (void)setNextAssistantRecognitionStrings:(id)arg1;
- (id)setNextVoiceRecognitionAudioInputPaths:(id)arg1;
- (void)_runScrollIconListTest;
- (void)_startScrollSpotlightTest;
- (void)_runScrollSpotlightTest;
- (void)finishedTest:(id)arg1 extraResults:(id)arg2;
- (void)runRotationTest:(int)arg1;
- (void)endLaunchTest;
- (void)startResumeTestNamed:(id)arg1 options:(id)arg2;
- (void)startLaunchTestNamed:(id)arg1 options:(id)arg2;
- (void)_retryLaunchTestWithOptions:(id)arg1;
- (BOOL)runTest:(id)arg1 options:(id)arg2;
- (void)_alertSheetStackChanged;

@end

