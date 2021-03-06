/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface SFWebViewController : UIViewController <SFFormAutoFillControllerDelegate, WKNavigationDelegatePrivate, WKUIDelegatePrivate, _SFDialogControllerDelegate, _SFDialogPresenting, _SFDialogViewControllerPresenting, _WKInputDelegate> {
    _SFFormAutoFillController * _autoFillController;
    <SFWebViewControllerDelegate> * _delegate;
    _SFDialogController * _dialogController;
    BOOL  _didFinishDocumentLoad;
    BOOL  _didFirstLayout;
    BOOL  _didFirstVisuallyNonEmptyLayout;
    BOOL  _loading;
    BOOL  _shouldSuppressDialogsThatBlockWebProcess;
    WKWebViewConfiguration * _webViewConfiguration;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SFWebViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) BOOL didFirstVisuallyNonEmptyLayout;
@property (readonly) unsigned int hash;
@property (getter=isLoading, nonatomic) BOOL loading;
@property (readonly) Class superclass;
@property (nonatomic, readonly) WKWebView *webView;
@property (nonatomic, readonly) WKWebViewConfiguration *webViewConfiguration;

- (void).cxx_destruct;
- (id)_actionsForElement:(id)arg1 defaultActions:(id)arg2 isPreviewing:(BOOL)arg3;
- (id)_presentingViewControllerForWebView:(id)arg1;
- (void)_webView:(id)arg1 accessoryViewCustomButtonTappedInFormInputSession:(id)arg2;
- (id)_webView:(id)arg1 actionsForElement:(id)arg2 defaultActions:(id)arg3;
- (void)_webView:(id)arg1 commitPreviewedViewController:(id)arg2;
- (void)_webView:(id)arg1 didStartInputSession:(id)arg2;
- (void)_webView:(id)arg1 insertTextSuggestion:(id)arg2 inInputSession:(id)arg3;
- (void)_webView:(id)arg1 navigation:(id)arg2 didSameDocumentNavigation:(int)arg3;
- (void)_webView:(id)arg1 navigationDidFinishDocumentLoad:(id)arg2;
- (id)_webView:(id)arg1 previewViewControllerForURL:(id)arg2 defaultActions:(id)arg3 elementInfo:(id)arg4;
- (void)_webView:(id)arg1 renderingProgressDidChange:(unsigned int)arg2;
- (BOOL)_webView:(id)arg1 shouldIncludeAppLinkActionsForElement:(id)arg2;
- (void)_webView:(id)arg1 willSubmitFormValues:(id)arg2 userObject:(id)arg3 submissionHandler:(id /* block */)arg4;
- (void)_webViewDidEndNavigationGesture:(id)arg1 withNavigationToBackForwardListItem:(id)arg2;
- (void)_webViewWebProcessDidCrash:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)dialogController:(id)arg1 didDismissDialog:(id)arg2;
- (void)dialogController:(id)arg1 dismissViewController:(id)arg2 withAdditionalAnimations:(id /* block */)arg3;
- (void)dialogController:(id)arg1 presentViewController:(id)arg2 withAdditionalAnimations:(id /* block */)arg3;
- (BOOL)dialogController:(id)arg1 shouldSuppressDialog:(id)arg2;
- (void)dialogController:(id)arg1 willPresentDialog:(id)arg2;
- (BOOL)didFirstVisuallyNonEmptyLayout;
- (BOOL)formAutoFillControllerCanPrefillForm:(id)arg1;
- (BOOL)formAutoFillControllerShouldDisableAutoFill:(id)arg1;
- (id)formAutoFillControllerURLForFormAutoFill:(id)arg1;
- (id)initWithWebViewConfiguration:(id)arg1;
- (BOOL)isLoading;
- (void)loadView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)presentDialog:(id)arg1 sender:(id)arg2;
- (void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)setDelegate:(id)arg1;
- (void)setLoading:(BOOL)arg1;
- (id)webView;
- (id)webView:(id)arg1 createWebViewWithConfiguration:(id)arg2 forNavigationAction:(id)arg3 windowFeatures:(id)arg4;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(id /* block */)arg3;
- (void)webView:(id)arg1 decidePolicyForNavigationResponse:(id)arg2 decisionHandler:(id /* block */)arg3;
- (void)webView:(id)arg1 didCommitNavigation:(id)arg2;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)webView:(id)arg1 didReceiveServerRedirectForProvisionalNavigation:(id)arg2;
- (void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;
- (void)webView:(id)arg1 runJavaScriptAlertPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)webView:(id)arg1 runJavaScriptConfirmPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)webView:(id)arg1 runJavaScriptTextInputPanelWithPrompt:(id)arg2 defaultText:(id)arg3 initiatedByFrame:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)webViewConfiguration;
- (void)willActivateWebViewController;
- (void)willBeginUserInitiatedNavigation;

@end
