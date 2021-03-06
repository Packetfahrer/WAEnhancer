//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAViewController.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegateFlowLayout.h"
#import "WAImageToImageTransitioning.h"
#import "WAMediaGallery.h"

@class NSIndexPath, NSMutableArray, NSMutableIndexSet, NSMutableSet, NSOperationQueue, UIBarButtonItem, UICollectionView, UIImageView, UILabel, UIView, WAMediaGalleryFlowLayout, WAMediaManager;

__attribute__((visibility("hidden")))
@interface WAMediaGalleryViewController : WAViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, WAImageToImageTransitioning, WAMediaGallery>
{
    NSOperationQueue *_thumbnailLoadingOpQueue;
    UILabel *_mediaCountLabel;
    UIView *_noMediaView;
    UIImageView *_noMediaImageView;
    UILabel *_noMediaTitleLabel;
    UILabel *_noMediaTextLabel;
    UIBarButtonItem *_editBarButton;
    UIBarButtonItem *_cancelBarButton;
    UIBarButtonItem *_deleteBarButton;
    UIBarButtonItem *_shareItemsBarButton;
    UIBarButtonItem *_doneBarButton;
    BOOL _editing;
    BOOL _needsAutoScroll;
    BOOL _tallScreen;
    UIView *_transitionAnimationSourceView;
    NSIndexPath *_messageIndexPathForTransitionAnimation;
    NSMutableSet *_selectedIndexPaths;
    NSMutableArray *_selectedMessagesBeforeMediaManagerContentChange;
    BOOL _mediaManagerUpdateInProgress;
    NSMutableIndexSet *_insertedSections;
    NSMutableArray *_insertedIndexPaths;
    NSMutableIndexSet *_deletedSections;
    NSMutableArray *_deletedIndexPaths;
    BOOL _isPerformingFancyRotation;
    UIImageView *_beforeRotationSnapshotImageView;
    UIImageView *_afterRotationSnapshotImageView;
    UIView *_whiteBackgroundView;
    NSIndexPath *_thumbnailIndexPathToRestore;
    WAMediaGalleryFlowLayout *_portraitLayout;
    WAMediaGalleryFlowLayout *_landscapeLayout;
    WAMediaManager *_mediaManager;
    id <WAMediaGalleryControllerDelegate> _delegate;
    NSIndexPath *_indexPathOfMessageToScrollToWhenAppearing;
    UICollectionView *_collectionView;
}

+ (id)controller;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) NSIndexPath *indexPathOfMessageToScrollToWhenAppearing; // @synthesize indexPathOfMessageToScrollToWhenAppearing=_indexPathOfMessageToScrollToWhenAppearing;
@property(nonatomic) id <WAMediaGalleryControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WAMediaManager *mediaManager; // @synthesize mediaManager=_mediaManager;

- (void)handleInteractiveDismissGesture:(id)arg1;
- (void)finishTransitionWithView:(id)arg1 context:(id)arg2;
- (id)viewForTransitionAnimationWithContext:(id)arg1;
- (void)prepareForTransitionWithContext:(id)arg1;
- (BOOL)shouldUseImageToImageTransitionForOperation:(int)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 context:(id)arg4;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(int)arg3;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 performAction:(SEL)arg2 forItemAtIndexPath:(id)arg3 withSender:(id)arg4;
- (BOOL)collectionView:(id)arg1 canPerformAction:(SEL)arg2 forItemAtIndexPath:(id)arg3 withSender:(id)arg4;
- (BOOL)collectionView:(id)arg1 shouldShowMenuForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (int)numberOfSectionsInCollectionView:(id)arg1;
- (void)mediaManagerDidAddContent:(id)arg1;
- (void)mediaManagerDidDeleteContent:(id)arg1;
- (void)mediaManagerDidChangeContent:(id)arg1;
- (void)mediaManagerWillChangeContent:(id)arg1;
- (void)forwardMediaItems:(id)arg1 toContact:(id)arg2;
- (void)shareSelectedItems:(id)arg1;
- (void)deleteSelectedMedia;
- (void)deleteAction:(id)arg1;
- (void)presentMediaAtIndexPath:(id)arg1;
- (void)exit:(id)arg1;
- (void)cancelAction:(id)arg1;
- (void)editAction:(id)arg1;
- (void)updateCollectionViewLayoutToCurrentInterfaceOrientationIfNecessary;
- (void)scrollAutomaticallyToRelevantItem;
- (void)relayoutNoMediaViews;
- (void)updateEditingWithAnimation:(BOOL)arg1;
- (void)updateSelection;
- (void)updateFooter;
- (void)updateMainVisibleView;
- (id)uniqueIdentifier;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (unsigned int)supportedInterfaceOrientations;
- (id)collectionViewSnapshot;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

