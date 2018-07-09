/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXTangierController : NSObject <STTextTangierInteractiveCanvasControllerDataSource, STTextTangierInteractiveCanvasControllerDelegate, SXTextComponentLayoutHosting, SXTextSelecting, SXViewportChangeListener> {
    UIView * _aboveRepsHost;
    <SXComponentActionHandler> * _componentActionHandler;
    STTextTangierCanvasViewController * _cvc;
    <SXTangierControllerDelegate> * _delegate;
    STTangierRepDirectLayerHostProvider * _directLayerHostProvider;
    bool  _disableClippingForTiles;
    STTextTangierDocumentRoot * _documentRoot;
    <SXTangierDragItemProvider> * _dragItemProvider;
    bool  _enclosingCanvasScrolling;
    STTextTangierInteractiveCanvasController * _icc;
    unsigned long long  _initialSubviewCount;
    UIView * _overlayRepsHost;
    bool  _performedInitialLayoutAndRender;
    NSMutableSet * _presentedTextViews;
    bool  _preventScrollViewDidScrollReentrance;
    bool  _rebuildFlows;
    STScrollView * _scrollView;
    NSObject<OS_dispatch_semaphore> * _semaphore;
    TSWPSelection * _storedSelection;
    STTangierTextRenderCollector * _textRenderCollector;
    UIView * _underRepsHost;
    SXViewport * _viewport;
}

@property (nonatomic, readonly) UIView *aboveRepsHost;
@property (nonatomic, readonly) bool allowEditMenuToAppear;
@property (nonatomic, readonly) bool allowTextEditingToBegin;
@property (nonatomic, readonly) <SXComponentActionHandler> *componentActionHandler;
@property (nonatomic, readonly) STTextTangierCanvasViewController *cvc;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SXTangierControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) STTangierRepDirectLayerHostProvider *directLayerHostProvider;
@property (nonatomic) bool disableClippingForTiles;
@property (nonatomic, readonly, retain) TSKDocumentRoot *documentRoot;
@property (nonatomic, readonly) <SXTangierDragItemProvider> *dragItemProvider;
@property (getter=isEnclosingCanvasScrolling, nonatomic) bool enclosingCanvasScrolling;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) STTextTangierInteractiveCanvasController *icc;
@property (nonatomic) unsigned long long initialSubviewCount;
@property (nonatomic, readonly) bool interactiveCanvasControllerAllowsHyperlinkInteraction;
@property (nonatomic, readonly) bool isCanvasInteractive;
@property (nonatomic, readonly) bool isPrintingCanvas;
@property (nonatomic, readonly) UIView *overlayRepsHost;
@property (nonatomic) bool performedInitialLayoutAndRender;
@property (nonatomic, retain) NSMutableSet *presentedTextViews;
@property (nonatomic) bool preventScrollViewDidScrollReentrance;
@property (nonatomic) bool rebuildFlows;
@property (nonatomic, retain) STScrollView *scrollView;
@property (nonatomic, readonly) NSObject<OS_dispatch_semaphore> *semaphore;
@property (nonatomic, readonly) bool shouldClipToScrollViewBoundsInVisibleBounds;
@property (nonatomic, readonly) bool shouldPopKnobsOutsideEnclosingScrollView;
@property (nonatomic, readonly) bool shouldResizeCanvasToScrollView;
@property (nonatomic, readonly) bool shouldShowInstructionalText;
@property (nonatomic, readonly) bool shouldShowTextOverflowGlyphs;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } sizeOfScrollViewEnclosingCanvas;
@property (nonatomic, readonly) bool spellCheckingSupported;
@property (nonatomic, readonly) bool spellCheckingSuppressed;
@property (nonatomic, retain) TSWPSelection *storedSelection;
@property (readonly) Class superclass;
@property (nonatomic, readonly) STTangierTextRenderCollector *textRenderCollector;
@property (nonatomic, readonly) UIView *underRepsHost;
@property (nonatomic, retain) SXViewport *viewport;

- (void).cxx_destruct;
- (void)_fixLayoutOffsets;
- (id)aboveRepsHost;
- (void)clearSelection;
- (id)componentActionHandler;
- (id)cvc;
- (void)dealloc;
- (id)delegate;
- (void)didStartPresentingTextView:(id)arg1;
- (void)didStopPresentingTextView:(id)arg1;
- (void)didTransitionToPresented;
- (id)directLayerHostProvider;
- (bool)disableClippingForTiles;
- (id)documentRoot;
- (id)dragItemProvider;
- (void)endSelection;
- (id)icc;
- (id)initWithViewport:(id)arg1 scrollView:(id)arg2 componentActionHandler:(id)arg3 dragItemProvider:(id)arg4;
- (unsigned long long)initialSubviewCount;
- (bool)interactiveCanvasController:(id)arg1 configureHardPressGesture:(id)arg2;
- (id)interactiveCanvasController:(id)arg1 delegateConformingToProtocol:(id)arg2 forRep:(id)arg3;
- (id)interactiveCanvasController:(id)arg1 dragItemForSmartField:(id)arg2 interaction:(id)arg3 session:(id)arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })interactiveCanvasController:(id)arg1 expandVisibleBoundsForClippingReps:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })interactiveCanvasController:(id)arg1 expandVisibleBoundsForTiling:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)interactiveCanvasController:(id)arg1 infoForModel:(id)arg2 withSelection:(id)arg3;
- (void)interactiveCanvasController:(id)arg1 interactedWithHyperlink:(id)arg2 info:(id)arg3 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 touchPoint:(struct CGPoint { double x1; double x2; })arg5 touchAndHold:(bool)arg6;
- (void)interactiveCanvasController:(id)arg1 scrollViewDidEndDragging:(id)arg2 willDecelerate:(bool)arg3;
- (void)interactiveCanvasController:(id)arg1 scrollViewWillBeginDragging:(id)arg2;
- (void)interactiveCanvasController:(id)arg1 scrollViewWillEndDragging:(id)arg2 withVelocity:(struct CGPoint { double x1; double x2; })arg3 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg4;
- (void)interactiveCanvasControllerDidLayoutAndRenderOnBackgroundThread:(id)arg1;
- (void)interactiveCanvasControllerDidScroll:(id)arg1;
- (void)interactiveCanvasControllerDidStopScrolling:(id)arg1;
- (bool)interactiveCanvasControllerIsRelatedCanvasScrolling:(id)arg1;
- (void)interactiveCanvasControllerWillStartInteraction:(id)arg1;
- (bool)isCanvasInteractive;
- (bool)isEnclosingCanvasScrolling;
- (id)layoutDescriptionForComponent:(id)arg1;
- (id)overlayRepsHost;
- (bool)performedInitialLayoutAndRender;
- (struct CGPoint { double x1; double x2; })pointForCharacterAtIndex:(unsigned long long)arg1 inComponentWithIndetifier:(id)arg2;
- (id)presentedTextViews;
- (bool)preventScrollViewDidScrollReentrance;
- (bool)rebuildFlows;
- (id)scrollPositionForVisibleRectWithComponentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)scrollView;
- (id)semaphore;
- (void)setDelegate:(id)arg1;
- (void)setDisableClippingForTiles:(bool)arg1;
- (void)setEnclosingCanvasScrolling:(bool)arg1;
- (void)setInitialSubviewCount:(unsigned long long)arg1;
- (void)setPerformedInitialLayoutAndRender:(bool)arg1;
- (void)setPresentedTextViews:(id)arg1;
- (void)setPreventScrollViewDidScrollReentrance:(bool)arg1;
- (void)setRebuildFlows:(bool)arg1;
- (void)setScrollView:(id)arg1;
- (void)setStoredSelection:(id)arg1;
- (void)setUnscaledCanvasRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setViewport:(id)arg1;
- (bool)shouldClipToScrollViewBoundsInVisibleBounds;
- (id)storedSelection;
- (id)stringForLookupItemForInteractiveCanvasController:(id)arg1;
- (void)teardown;
- (id)textRenderCollector;
- (id)topLevelLayersForInteractiveCanvasController:(id)arg1;
- (id)topLevelRepsForInteractiveCanvasController:(id)arg1;
- (id)underRepsHost;
- (void)updateCanvasSize:(struct CGSize { double x1; double x2; })arg1 forComponentViews:(id)arg2;
- (void)updateHUD;
- (void)updateInfosWithBlock:(id /* block */)arg1;
- (void)updatePresentationState;
- (id)viewport;
- (void)viewport:(id)arg1 appearStateChangedFromState:(unsigned long long)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleBounds;
- (id)visibleBoundsClipViewForInteractiveCanvasController:(id)arg1;
- (void)willTransitionToPresented;
- (void)willTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end