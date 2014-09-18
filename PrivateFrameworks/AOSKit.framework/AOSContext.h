/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AOSKit.framework/AOSKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSString, NSThread;

@interface AOSContext : NSObject <NSPortDelegate> {
    int (*_callback)();
     /* Encoded args for previous method: @32@0:8^{AOSAccount=}16^{AOSTransactionC=#CC^v^{__CFError}^?@?@^v@^?^?}24 */
     /* Encoded args for previous method: ^{AOSTransactionC=#CC^v^{__CFError}^?@?@^v@^?^?}16@0:8 */
     /* Encoded args for previous method: v24@0:8^{AOSTransactionC=#CC^v^{__CFError}^?@?@^v@^?^?}16 */
    struct AOSAccount { } *_account;
    NSThread *_callbackThread;
    id _info;
    struct AOSTransactionC { Class x1; unsigned char x2; unsigned char x3; void *x4; struct __CFError {} *x5; int (*x6)(); id x7; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x8; id x9; void *x10; id x11; int (*x12)(); int (*x13)(); } *_transaction;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

+ (id)contextWithAccount:(struct AOSAccount { }*)arg1 andTransaction:(struct AOSTransactionC { Class x1; unsigned char x2; unsigned char x3; void *x4; struct __CFError {} *x5; int (*x6)(); id x7; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x8; id x9; void *x10; id x11; int (*x12)(); int (*x13)(); }*)arg2;

- (struct AOSTransactionC { Class x1; unsigned char x2; unsigned char x3; void *x4; struct __CFError {} *x5; int (*x6)(); id x7; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x8; id x9; void *x10; id x11; int (*x12)(); int (*x13)(); }*)transaction;
- (id)_callbackThread;
- (void)_performCallback;
- (struct AOSAccount { }*)account;
- (void)dealloc;
- (void)finalize;
- (id)info;
- (id)init;
- (bool)scheduleCallback;
- (void)setAccount:(struct AOSAccount { }*)arg1;
- (void)setInfo:(id)arg1;
- (void)setTransaction:(struct AOSTransactionC { Class x1; unsigned char x2; unsigned char x3; void *x4; struct __CFError {} *x5; int (*x6)(); id x7; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x8; id x9; void *x10; id x11; int (*x12)(); int (*x13)(); }*)arg1;

@end