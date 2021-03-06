//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WATableViewController.h"

#import "ABPeoplePickerNavigationControllerDelegate.h"
#import "NSFetchedResultsControllerDelegate.h"
#import "UINavigationControllerDelegate.h"

@class NSArray, NSFetchedResultsController, NSMutableArray, UIActivityIndicatorView, UIBarButtonItem, UIImageView, UILabel, UIRefreshControl, UITableView, UITableViewCell, UIView, WAProgressHUD;

__attribute__((visibility("hidden")))
@interface FavoritesViewController : WATableViewController <UINavigationControllerDelegate, ABPeoplePickerNavigationControllerDelegate, NSFetchedResultsControllerDelegate>
{
    UIView *_refreshHeaderView;
    UILabel *_refreshLabel;
    UIImageView *_refreshArrow;
    UIActivityIndicatorView *_refreshSpinner;
    BOOL _isDragging;
    BOOL _isLoading;
    UIRefreshControl *_refreshControl;
    UIView *_bgView;
    UIBarButtonItem *_barButtonAdd;
    UIBarButtonItem *_barButtonDeleteAll;
    WAProgressHUD *_progressHUD;
    NSArray *_searchResults;
    unsigned int _numberOfGeneratedFavoritesToNotifyUser;
    UITableViewCell *_inviteCell;
    UITableViewCell *_favoritesCountCell;
    NSFetchedResultsController *_fetchedResultsController;
    NSMutableArray *_insertedFavorites;
    BOOL _ignoreChangeNotifications;
    BOOL _animateChanges;
    BOOL _needsInitialLayout;
    UITableView *_tableViewFavorites;
    UITableView *_tableViewButtons;
    UIImageView *_imageNoFavorites;
    UIView *_viewNoFavorites;
}

@property(retain, nonatomic) UIView *viewNoFavorites; // @synthesize viewNoFavorites=_viewNoFavorites;
@property(retain, nonatomic) UIImageView *imageNoFavorites; // @synthesize imageNoFavorites=_imageNoFavorites;
@property(retain, nonatomic) UITableView *tableViewButtons; // @synthesize tableViewButtons=_tableViewButtons;
@property(retain, nonatomic) UITableView *tableViewFavorites; // @synthesize tableViewFavorites=_tableViewFavorites;

- (void)profilePictureUpdated:(id)arg1;
- (void)fontSizeDidChange:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)searchDisplayControllerDidEndSearch:(id)arg1;
- (void)searchDisplayControllerWillBeginSearch:(id)arg1;
- (BOOL)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)configureCell:(id)arg1 withFavorite:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)controllerDidChangeContent:(id)arg1;
- (void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned int)arg4 newIndexPath:(id)arg5;
- (void)controller:(id)arg1 didChangeSection:(id)arg2 atIndex:(unsigned int)arg3 forChangeType:(unsigned int)arg4;
- (void)controllerWillChangeContent:(id)arg1;
- (void)faultInAllFavorites;
- (void)prefetchContactAndStatusRelationshipsForPhones:(id)arg1;
- (void)loadInitialFavorites;
- (void)contactsStorageWillReloadAddressBook:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)peoplePickerNavigationControllerDidCancel:(id)arg1;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void *)arg2 property:(int)arg3 identifier:(int)arg4;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void *)arg2;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)syncManagerDidFinishSync:(id)arg1;
- (void)showRefreshFailedError;
- (void)contactsStorageDidFailToGenerateFavorites:(id)arg1;
- (void)contactsStorageDidGenerateFavorites:(id)arg1;
- (void)stopLoading;
- (void)startLoading;
- (void)refreshFavorites;
- (void)refreshControlAction:(id)arg1;
- (void)deleteAllAction:(id)arg1;
- (void)addNewFavoriteAction:(id)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)inviteContacts;
- (void)leaveSearchMode;
- (void)searchWithCriteria:(id)arg1;
- (void)removeHUD;
- (void)showHUD:(id)arg1;
- (void)notifyUserAfterGeneratingFavorites:(int)arg1;
- (void)saveTableScrollPosition;
- (void)restoreTableScrollPosition;
- (void)updateInterfaceAnimated:(BOOL)arg1;
- (void)updateHeaderLayout;
- (void)dealloc;
- (id)init;

@end

