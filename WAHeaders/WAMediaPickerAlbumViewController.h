//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAMediaPickerBaseViewController.h"

#import "WAImageToImageTransitioning.h"
#import "WAMediaPickerAlbumControllerDelegate.h"
#import "WAMediaPickerAlbumTableViewCellDelegate.h"

@class NSNumber, UIImageView, UILabel, UIView, WAMediaPickerAlbumController;

__attribute__((visibility("hidden")))
@interface WAMediaPickerAlbumViewController : WAMediaPickerBaseViewController <WAMediaPickerAlbumTableViewCellDelegate, WAMediaPickerAlbumControllerDelegate, WAImageToImageTransitioning>
{
    unsigned int _assetsCountPerRow;
    UIView *_footerView;
    UILabel *_footerLabel;
    BOOL _albumLoadingInProgress;
    NSNumber *_assetIndexToRestore;
    struct CGPoint _contentOffsetAtStartOfRotation;
    UIImageView *_beforeRotationSnapshotImageView;
    UIImageView *_afterRotationSnapshotImageView;
    UIView *_whiteBackgroundView;
    BOOL _rotatingViewWithNoMedia;
    UILabel *_noMediaTitleLabel;
    UILabel *_noMediaBodyTextLabel;
    WAMediaPickerAlbumController *_albumController;
}

+ (id)controller;
@property(retain, nonatomic) WAMediaPickerAlbumController *albumController; // @synthesize albumController=_albumController;

- (void)finishTransitionWithView:(id)arg1 context:(id)arg2;
- (id)viewForTransitionAnimationWithContext:(id)arg1;
- (void)prepareForTransitionWithContext:(id)arg1;
- (BOOL)shouldUseImageToImageTransitionForOperation:(int)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 context:(id)arg4;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)adjustContentOffsetOfTableViewToNearestValidMultipleOfRowHeight;
- (id)tableViewSnapshot;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)showUndownloadedPhotoError;
- (BOOL)mediaPickerAlbumTableViewCell:(id)arg1 didReceiveTapAtIndex:(int)arg2;
- (void)updateFooter;
- (int)assetsCountPerRow;
- (void)mediaPickerAlbumController:(id)arg1 didFinishLoadingAlbumWithOutcome:(BOOL)arg2;
- (void)mediaPickerAlbumControllerWillBeginLoadingAlbum:(id)arg1;
- (void)scrollToBottom;
- (struct CGPoint)maximumContentOffset;
- (void)scrollToAssetAtIndex:(int)arg1;
- (int)indexOfAssetAtCenterOfView;
- (void)scrollToLastSelectedPhoto;
- (BOOL)scrollEnabled;
- (void)adjustScrollViewInsets;
- (void)reloadTable;
- (void)relayoutNoMediaViews;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)initWithStyle:(int)arg1;

@end
