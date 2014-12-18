//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAViewController.h"

#import "MFMailComposeViewControllerDelegate.h"
#import "ProblemInputControllerDelegate.h"

@class NSString, NSTimer, UIButton, UIImageView, UILabel, UIProgressView, UITextField, UIView, WAOverlayView;

__attribute__((visibility("hidden")))
@interface PassInputViewController : WAViewController <MFMailComposeViewControllerDelegate, ProblemInputControllerDelegate>
{
    int _uiBlockState;
    UIImageView *_imageViewStop;
    UIImageView *_imageViewStop2;
    WAOverlayView *_overlayView;
    NSTimer *_blockTimer;
    NSTimer *_callButtonTimer;
    NSTimer *_editButtonTimer;
    BOOL _shouldShowActivityIndicator;
    BOOL _registerRequestInProgress;
    NSString *_contextFailReason;
    NSString *_learnMoreUrl;
    NSString *_verificationCodeFromUrl;
    BOOL _changePhoneNumberMode;
    id <PassInputViewControllerDelegate> _delegate;
    UIView *_viewContainer;
    UILabel *_labelHelperText1;
    UILabel *_labelHelperText2;
    UIView *_viewCodeInputFields;
    UITextField *_textFieldCode;
    UITextField *_textFieldCode2;
    UILabel *_labelCode;
    UILabel *_labelCode2;
    UIView *_viewRetryButtons;
    UIButton *_buttonResend;
    UIButton *_buttonCall;
    UIView *_viewUIBlocked;
    UILabel *_labelUIBlocked;
    UIProgressView *_progressViewBlock;
}

@property(retain, nonatomic) UIProgressView *progressViewBlock; // @synthesize progressViewBlock=_progressViewBlock;
@property(retain, nonatomic) UILabel *labelUIBlocked; // @synthesize labelUIBlocked=_labelUIBlocked;
@property(retain, nonatomic) UIView *viewUIBlocked; // @synthesize viewUIBlocked=_viewUIBlocked;
@property(retain, nonatomic) UIButton *buttonCall; // @synthesize buttonCall=_buttonCall;
@property(retain, nonatomic) UIButton *buttonResend; // @synthesize buttonResend=_buttonResend;
@property(retain, nonatomic) UIView *viewRetryButtons; // @synthesize viewRetryButtons=_viewRetryButtons;
@property(retain, nonatomic) UILabel *labelCode2; // @synthesize labelCode2=_labelCode2;
@property(retain, nonatomic) UILabel *labelCode; // @synthesize labelCode=_labelCode;
@property(retain, nonatomic) UITextField *textFieldCode2; // @synthesize textFieldCode2=_textFieldCode2;
@property(retain, nonatomic) UITextField *textFieldCode; // @synthesize textFieldCode=_textFieldCode;
@property(retain, nonatomic) UIView *viewCodeInputFields; // @synthesize viewCodeInputFields=_viewCodeInputFields;
@property(retain, nonatomic) UILabel *labelHelperText2; // @synthesize labelHelperText2=_labelHelperText2;
@property(retain, nonatomic) UILabel *labelHelperText1; // @synthesize labelHelperText1=_labelHelperText1;
@property(retain, nonatomic) UIView *viewContainer; // @synthesize viewContainer=_viewContainer;
@property(nonatomic) BOOL changePhoneNumberMode; // @synthesize changePhoneNumberMode=_changePhoneNumberMode;
@property(nonatomic) id <PassInputViewControllerDelegate> delegate; // @synthesize delegate=_delegate;

- (void)probleminputControllerDidCancel:(id)arg1;
- (void)problemInputController:(id)arg1 didFinishWithText:(id)arg2 attachment:(id)arg3;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3;
- (void)codeValidationFailedWithError:(id)arg1;
- (void)codeValidatedWithResult:(id)arg1;
- (void)codeOrCallRequestFailedWithError:(id)arg1;
- (void)callRequestFinishedWithResult:(id)arg1;
- (void)codeRequestFinishedWithResult:(id)arg1;
- (void)setVerificationCodeFromUrl:(id)arg1;
- (void)launchedFromUrl:(id)arg1;
- (void)enterVerificationCodeFromUrl:(id)arg1;
- (void)cancelAction:(id)arg1;
- (void)callMeAction:(id)arg1;
- (void)resendCodeAction:(id)arg1;
- (void)codeEditedAction:(id)arg1;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)requestSMSWithCode;
- (void)formatCodePresentation;
- (void)finishController;
- (void)setHeaderLabelText:(BOOL)arg1;
- (void)composeEmail:(id)arg1;
- (void)showAndReleaseLearnMoreAlert:(id)arg1 message:(id)arg2 url:(id)arg3;
- (void)showAndReleaseAppStoreAlert:(id)arg1;
- (void)showAndReleaseUnspecifiedErrorAlert;
- (void)showAndReleaseGenericAlert:(id)arg1;
- (void)showAndReleaseContactSupportAlert:(id)arg1;
- (void)showAndReleaseCodeEntryFailedAlert:(id)arg1;
- (void)checkEditAvailability:(id)arg1;
- (void)updateBlockState:(id)arg1;
- (void)checkPasscodeAttempts;
- (void)adjustHelperTextFont;
- (void)setUIBlockState:(int)arg1;
- (BOOL)blockStateIsBlocked;
- (void)startBlockTimer;
- (void)resizeHelperTextLabels;
- (void)layoutAllViews;
- (void)layoutUIBlockedView;
- (void)layoutRetryButtonsAnimated:(BOOL)arg1;
- (void)updateCallButtonTitle:(id)arg1;
- (void)enableCallButtonTimer:(BOOL)arg1;
- (void)hideOverlayWithCompletion:(id)arg1 setViewTitle:(id)arg2;
- (void)showOverlay:(id)arg1;
- (void)dealloc;
- (id)init;

@end
