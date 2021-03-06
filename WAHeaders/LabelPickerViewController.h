//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WATableViewController.h"

#import "CustomLabelInputViewContollerDelegate.h"

@class NSArray, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface LabelPickerViewController : WATableViewController <CustomLabelInputViewContollerDelegate>
{
    NSArray *_standardLabels;
    NSMutableArray *_customLabels;
    BOOL _useGenericLabels;
    id <LabelPickerViewControllerDelegate> _delegate;
    NSString *_selectedLabel;
}

+ (id)localizedLabel:(struct __CFString *)arg1;
@property(nonatomic) BOOL useGenericLabels; // @synthesize useGenericLabels=_useGenericLabels;
@property(copy, nonatomic) NSString *selectedLabel; // @synthesize selectedLabel=_selectedLabel;
@property(nonatomic) id <LabelPickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;

- (void)labelInputViewControllerDidCancel:(id)arg1;
- (void)labelInputViewController:(id)arg1 didSaveLabel:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)doneAction:(id)arg1;
- (void)cancelAction:(id)arg1;
- (id)standardLabels;
- (void)dealloc;
- (id)init;

@end

