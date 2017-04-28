//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr 19 2016 14:33:02).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WACallViewController.h"

//#import "WAVoiceCallInteractionBlockingViewDelegate-Protocol.h"

@class MPVolumeView, NSString, NSTimer, UIActionSheet, WAVoiceCallInteractionBlockingView, _WATouchCapturingGestureRecognizer;

@interface WAVoiceCallViewController : WACallViewController //<WAVoiceCallInteractionBlockingViewDelegate>
{
    MPVolumeView *_audioRouteButton;
    UIActionSheet *_activeAudioRouteActionSheet;
    _Bool _receivedRouteChangeNotifications;
    WAVoiceCallInteractionBlockingView *_interactionBlockingView;
    _WATouchCapturingGestureRecognizer *_touchCapturingRecognizer;
    NSTimer *_delayedInteractionBlockingTimer;
}

//- (void).cxx_destruct;
- (void)voiceCallInteractionBlockingViewDidUnlock:(id)arg1;
- (void)didTouch;
- (void)setUpTouchCapturingRecognizerIfNeeded;
- (void)cancelDelayedInteractionBlocking;
- (void)startDelayedInteractionBlocking;
- (void)restartDelayedInteractionBlocking;
- (void)hideInteractionBlockingView;
- (void)setUpInteractionBlockingViewIfNeeded;
- (void)showInteractionBlockingView;
- (void)stopInteractionBlockingIfNeeded;
- (void)startInteractionBlockingIfNeeded;
- (void)updateInteractionBlockingForState:(int)arg1;
- (_Bool)isCallEnding;
- (void)audioRouteDidChange:(id)arg1;
- (void)updateInterfaceForCurrentAudioRoute;
- (void)showAudioRoutePicker;
- (void)installInvisibleAudioRouteButtonIfNeeded;
- (void)callActionViewDidToggleSpeaker:(id)arg1;
- (void)updateLayoutForCurrentState;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithInitialCallState:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
