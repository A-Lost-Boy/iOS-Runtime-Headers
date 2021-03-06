/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPassWelcomeView : PKWelcomeView {
    UIButton * _buttonScanCode;
    bool  _currentRearCameraIsAllowed;
}

@property (nonatomic, retain) UIButton *buttonScanCode;
@property (nonatomic) bool currentRearCameraIsAllowed;

+ (double)bottomMargin;
+ (double)defaultHeight;
+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })headerImageMargins;
+ (struct CGSize { double x1; double x2; })headerImageSize;
+ (id)messageAttributedString;

- (void).cxx_destruct;
- (void)_appStorePressed;
- (void)_scanCodePressed;
- (void)addScanCodeButton;
- (id)buttonScanCode;
- (bool)currentRearCameraIsAllowed;
- (void)dealloc;
- (id)init;
- (bool)needsUpdate;
- (void)removeScanCodeButton;
- (void)setButtonScanCode:(id)arg1;
- (void)setCurrentRearCameraIsAllowed:(bool)arg1;

@end
