/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
 */

@interface CDPDSecureBackupProxyImpl : NSObject <CDPDSecureBackupProxy>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (id)_secureBackup;
- (void)backOffDateWithInfo:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)disableWithInfo:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)enableWithInfo:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)getAccountInfoWithInfo:(id)arg1 completionBlockWithResults:(id /* block */)arg2;
- (void)recoverWithInfo:(id)arg1 completionBlockWithResults:(id /* block */)arg2;
- (void)setBackOffDateWithInfo:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)uncachePassphraseWithInfo:(id)arg1 completionBlock:(id /* block */)arg2;

@end