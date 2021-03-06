/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:34 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <libobjc.A.dylib/AVPlayerViewControllerDelegatePrivate.h>
#import <VideosUI/VideosExtrasContextDelegate.h>
#import <libobjc.A.dylib/VUINowPlayingFeatureMonitorDelegate.h>

@class VUIPlayer, TVPStateMachine, VideosExtrasContext, AVPlayerViewController, UIViewController, MPAVRoutingController, AVExternalPlaybackController, VideosExtrasPresenter, VUINowPlayingFeatureMonitor, UIButton, VUIVideoAdvisoryLogoImageDownloader, UIImage, VUIVideoAdvisoryView, NSString;

@interface VUIPlaybackManager : NSObject <AVPlayerViewControllerDelegatePrivate, VideosExtrasContextDelegate, VUINowPlayingFeatureMonitorDelegate> {

	BOOL _requiresLinearPlayback;
	BOOL _shouldDisplayTVRatingWhenVideoBoundsIsAvailable;
	BOOL _shouldAnimateTVRatingView;
	VUIPlayer* _mainPlayer;
	VUIPlayer* _backgroundAudioPlayer;
	VUIPlayer* _extrasPlayer;
	VUIPlayer* _activePlayer;
	TVPStateMachine* _stateMachine;
	VideosExtrasContext* _extrasContext;
	AVPlayerViewController* _avPlayerViewController;
	AVPlayerViewController* _mainAVPlayerViewController;
	AVPlayerViewController* _extrasAVPlayerViewController;
	UIViewController* _presentingViewController;
	long long _dismissalOperation;
	MPAVRoutingController* _routingController;
	AVExternalPlaybackController* _avExternalPlaybackController;
	VideosExtrasPresenter* _extrasPresenter;
	VUINowPlayingFeatureMonitor* _featureMonitor;
	UIButton* _skipButton;
	VUIVideoAdvisoryLogoImageDownloader* _logoImageDownloader;
	UIImage* _ratingImage;
	VUIVideoAdvisoryView* _ratingView;

}

@property (nonatomic,retain) VUIPlayer * mainPlayer;                                                   //@synthesize mainPlayer=_mainPlayer - In the implementation block
@property (nonatomic,retain) VUIPlayer * backgroundAudioPlayer;                                        //@synthesize backgroundAudioPlayer=_backgroundAudioPlayer - In the implementation block
@property (nonatomic,retain) VUIPlayer * extrasPlayer;                                                 //@synthesize extrasPlayer=_extrasPlayer - In the implementation block
@property (assign,nonatomic,__weak) VUIPlayer * activePlayer;                                          //@synthesize activePlayer=_activePlayer - In the implementation block
@property (nonatomic,retain) TVPStateMachine * stateMachine;                                           //@synthesize stateMachine=_stateMachine - In the implementation block
@property (nonatomic,retain) VideosExtrasContext * extrasContext;                                      //@synthesize extrasContext=_extrasContext - In the implementation block
@property (nonatomic,retain) AVPlayerViewController * avPlayerViewController;                          //@synthesize avPlayerViewController=_avPlayerViewController - In the implementation block
@property (nonatomic,retain) AVPlayerViewController * mainAVPlayerViewController;                      //@synthesize mainAVPlayerViewController=_mainAVPlayerViewController - In the implementation block
@property (nonatomic,retain) AVPlayerViewController * extrasAVPlayerViewController;                    //@synthesize extrasAVPlayerViewController=_extrasAVPlayerViewController - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * presentingViewController;                       //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (assign,nonatomic) long long dismissalOperation;                                             //@synthesize dismissalOperation=_dismissalOperation - In the implementation block
@property (nonatomic,retain) MPAVRoutingController * routingController;                                //@synthesize routingController=_routingController - In the implementation block
@property (assign,nonatomic) BOOL requiresLinearPlayback;                                              //@synthesize requiresLinearPlayback=_requiresLinearPlayback - In the implementation block
@property (nonatomic,retain) AVExternalPlaybackController * avExternalPlaybackController;              //@synthesize avExternalPlaybackController=_avExternalPlaybackController - In the implementation block
@property (nonatomic,retain) VideosExtrasPresenter * extrasPresenter;                                  //@synthesize extrasPresenter=_extrasPresenter - In the implementation block
@property (nonatomic,retain) VUINowPlayingFeatureMonitor * featureMonitor;                             //@synthesize featureMonitor=_featureMonitor - In the implementation block
@property (nonatomic,retain) UIButton * skipButton;                                                    //@synthesize skipButton=_skipButton - In the implementation block
@property (nonatomic,retain) VUIVideoAdvisoryLogoImageDownloader * logoImageDownloader;                //@synthesize logoImageDownloader=_logoImageDownloader - In the implementation block
@property (nonatomic,retain) UIImage * ratingImage;                                                    //@synthesize ratingImage=_ratingImage - In the implementation block
@property (nonatomic,retain) VUIVideoAdvisoryView * ratingView;                                        //@synthesize ratingView=_ratingView - In the implementation block
@property (assign,nonatomic) BOOL shouldDisplayTVRatingWhenVideoBoundsIsAvailable;                     //@synthesize shouldDisplayTVRatingWhenVideoBoundsIsAvailable=_shouldDisplayTVRatingWhenVideoBoundsIsAvailable - In the implementation block
@property (assign,nonatomic) BOOL shouldAnimateTVRatingView;                                           //@synthesize shouldAnimateTVRatingView=_shouldAnimateTVRatingView - In the implementation block
@property (nonatomic,readonly) BOOL isFullscreenPlaybackUIBeingShown; 
@property (nonatomic,readonly) BOOL isPlaybackUIBeingShown; 
@property (nonatomic,readonly) BOOL isPIPing; 
@property (nonatomic,readonly) NSObject*<TVPMediaItem> currentMediaItem; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(BOOL)_shouldWarnStartingRentalPlaybackWindowWithMediaItem:(id)arg1 ;
+(void)_presentStartingPlaybackWindowWarningWithRentalMediaItem:(id)arg1 presentingViewController:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(void)_performRatingAndAgeVerificationWithMediaItem:(id)arg1 presentingController:(id)arg2 completion:(/*^block*/id)arg3 ;
+(void)_presentCantPlaybackOverCellularAlertControllerWithMediaItem:(id)arg1 presentingViewController:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(void)_presentCellularPlaybackIsDisabledAlertControllerWithPresentingViewController:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(BOOL)_shouldWarnAboutPlaybackQualityForRentalMediaItem:(id)arg1 ;
+(void)_verifyMediaItemIsPlayableOnCellular:(id)arg1 presentingViewController:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(void)_showCellularPlaybackQualityOptionsForRentalMediaItem:(id)arg1 presentingViewController:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(id)_rentalPlaybackStartDateWithMediaItem:(id)arg1 ;
+(void)preflightPlaybackWithMediaItem:(id)arg1 presentingViewController:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)init;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(UIViewController *)presentingViewController;
-(TVPStateMachine *)stateMachine;
-(void)setStateMachine:(TVPStateMachine *)arg1 ;
-(void)_handleTapGesture:(id)arg1 ;
-(void)_applicationWillResignActive:(id)arg1 ;
-(void)_applicationDidBecomeActive:(id)arg1 ;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(void)playerViewController:(id)arg1 willEndFullScreenPresentationWithAnimationCoordinator:(id)arg2 ;
-(void)playerViewControllerWillStartPictureInPicture:(id)arg1 ;
-(void)playerViewControllerDidStartPictureInPicture:(id)arg1 ;
-(void)playerViewController:(id)arg1 failedToStartPictureInPictureWithError:(id)arg2 ;
-(void)playerViewControllerWillStopPictureInPicture:(id)arg1 ;
-(void)playerViewControllerDidStopPictureInPicture:(id)arg1 ;
-(void)playerViewController:(id)arg1 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(/*^block*/id)arg2 ;
-(AVPlayerViewController *)avPlayerViewController;
-(MPAVRoutingController *)routingController;
-(void)setRequiresLinearPlayback:(BOOL)arg1 ;
-(BOOL)requiresLinearPlayback;
-(void)playerViewController:(id)arg1 contentViewWillTransitionToSize:(CGSize)arg2 withTransitionCoordinator:(id)arg3 ;
-(NSObject*<TVPMediaItem>)currentMediaItem;
-(VUIVideoAdvisoryView *)ratingView;
-(void)setRatingView:(VUIVideoAdvisoryView *)arg1 ;
-(void)setSkipButton:(UIButton *)arg1 ;
-(UIButton *)skipButton;
-(void)_skipButtonTapped:(id)arg1 ;
-(VUIPlayer *)activePlayer;
-(void)setRoutingController:(MPAVRoutingController *)arg1 ;
-(void)_registerStateMachineHandlers;
-(BOOL)isPlaybackUIBeingShown;
-(void)dismissPlaybackAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_currentMediaItemDidChange:(id)arg1 ;
-(void)extrasRequestsMediaPlayback:(id)arg1 isBackground:(BOOL)arg2 ;
-(VideosExtrasContext *)extrasContext;
-(void)setExtrasContext:(VideosExtrasContext *)arg1 ;
-(void)extrasRequestReloadWithContext:(id)arg1 ;
-(void)_registerApplicationNotifications;
-(VUIPlayer *)mainPlayer;
-(AVPlayerViewController *)mainAVPlayerViewController;
-(VUIPlayer *)extrasPlayer;
-(AVPlayerViewController *)extrasAVPlayerViewController;
-(void)_notifyAVPlayerViewControllerDisplaySize;
-(void)_showOrUpdateTVRatingIfNeeded;
-(void)_configureStillWatchingFeatureMonitoringIfLivePlayback;
-(AVExternalPlaybackController *)avExternalPlaybackController;
-(void)setAvExternalPlaybackController:(AVExternalPlaybackController *)arg1 ;
-(void)_setExtrasButtonVisible:(BOOL)arg1 ;
-(void)_updateRequiresLinearPlayback;
-(VUINowPlayingFeatureMonitor *)featureMonitor;
-(void)_updateTimeBoundFeature:(id)arg1 animated:(BOOL)arg2 ;
-(void)_updateTimeTriggeredFeature:(id)arg1 animated:(BOOL)arg2 ;
-(void)_downloadRatingImageIfAvailable:(id)arg1 ;
-(void)_addRollsInfoFeaturesFromMediaItem:(id)arg1 ;
-(void)_addSkipInfoFeaturesFromMediaItem:(id)arg1 ;
-(UIImage *)ratingImage;
-(VUIVideoAdvisoryLogoImageDownloader *)logoImageDownloader;
-(void)setRatingImage:(UIImage *)arg1 ;
-(void)_addTVRatingFeatureFromMediaItem:(id)arg1 ;
-(void)_showTVRating:(BOOL)arg1 withImage:(id)arg2 animated:(BOOL)arg3 ;
-(void)_showSkipButtonWithTitle:(id)arg1 show:(BOOL)arg2 animated:(BOOL)arg3 ;
-(BOOL)shouldDisplayTVRatingWhenVideoBoundsIsAvailable;
-(BOOL)shouldAnimateTVRatingView;
-(void)setShouldDisplayTVRatingWhenVideoBoundsIsAvailable:(BOOL)arg1 ;
-(void)setShouldAnimateTVRatingView:(BOOL)arg1 ;
-(void)_addTappableViewToRemoveSkipButton;
-(void)_removeTappableViewForSkipButtonIfNeeded;
-(id)_stillWatchingAlertDurationOverride;
-(void)_showStillWatchingAlertFeature:(id)arg1 ;
-(void)setAvPlayerViewController:(AVPlayerViewController *)arg1 ;
-(void)setExtrasAVPlayerViewController:(AVPlayerViewController *)arg1 ;
-(void)_playbackStateDidChange:(id)arg1 ;
-(void)_playbackErrorDidOccur:(id)arg1 ;
-(void)_externalPlaybackTypeDidChange:(id)arg1 ;
-(void)_networkReachbilityDidChange:(id)arg1 ;
-(VUIPlayer *)backgroundAudioPlayer;
-(void)setBackgroundAudioPlayer:(VUIPlayer *)arg1 ;
-(void)setActivePlayer:(VUIPlayer *)arg1 ;
-(void)setMainPlayer:(VUIPlayer *)arg1 ;
-(void)setExtrasPlayer:(VUIPlayer *)arg1 ;
-(long long)dismissalOperation;
-(void)setDismissalOperation:(long long)arg1 ;
-(VideosExtrasPresenter *)extrasPresenter;
-(void)setExtrasPresenter:(VideosExtrasPresenter *)arg1 ;
-(void)setFeatureMonitor:(VUINowPlayingFeatureMonitor *)arg1 ;
-(void)setLogoImageDownloader:(VUIVideoAdvisoryLogoImageDownloader *)arg1 ;
-(void)_avPlayerViewControllerPresentationDidTimeout;
-(void)setMainAVPlayerViewController:(AVPlayerViewController *)arg1 ;
-(void)_updateStopWhenBackgroundedFeatureForApplicationState:(long long)arg1 isFullScreen:(BOOL)arg2 ;
-(void)_updateRollsInfoFromMainPlayersCurrentMediaItem;
-(void)extrasRequestsPlaybackStop;
-(void)extrasDoneButtonPressed;
-(void)extrasMenuItemSelected:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)extrasBackButtonPressed;
-(void)extrasContext:(id)arg1 hadFatalError:(id)arg2 ;
-(void)extrasContextDidLoadMainMenuItems:(id)arg1 ;
-(void)extrasContext:(id)arg1 extrasVisibilityNeedsUpdate:(BOOL)arg2 ;
-(void)featureMonitor:(id)arg1 featureDidChangeState:(id)arg2 animated:(BOOL)arg3 ;
-(void)presentPlaylist:(id)arg1 fromViewController:(id)arg2 dismissalOperation:(long long)arg3 animated:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(void)presentExtrasWithURL:(id)arg1 storeID:(id)arg2 actionParams:(id)arg3 fromViewController:(id)arg4 completion:(/*^block*/id)arg5 ;
-(BOOL)isFullscreenPlaybackUIBeingShown;
-(BOOL)isPIPing;
@end

