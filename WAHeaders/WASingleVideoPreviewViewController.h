//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAVideoPreviewViewController.h"

#import "UINavigationControllerDelegate.h"
#import "UIVideoEditorControllerDelegate.h"

@class MPMoviePlayerController;

__attribute__((visibility("hidden")))
@interface WASingleVideoPreviewViewController : WAVideoPreviewViewController <UIVideoEditorControllerDelegate, UINavigationControllerDelegate>
{
    MPMoviePlayerController *_player;
}


- (void)videoEditorControllerDidCancel:(id)arg1;
- (void)videoEditorController:(id)arg1 didFailWithError:(id)arg2;
- (void)videoEditorController:(id)arg1 didSaveEditedVideoToPath:(id)arg2;
- (void)processTranscodedVideoOfDuration:(double)arg1 atURL:(id)arg2 referenceURL:(id)arg3;
- (void)didProcessVideo;
- (void)willProcessVideo;
- (void)sendVideo:(id)arg1;
- (id)fullscreenButtonOniOS7InView:(id)arg1;
- (void)hideFullscreenButton;
- (void)playerDidPostNotification:(id)arg1;
- (void)playerDidEnterFullscreen:(id)arg1;
- (void)playerWillEnterFullscreen:(id)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;

@end

