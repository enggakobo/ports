PORTNAME=	pynitrokey
DISTVERSION=	0.4.50
CATEGORIES=	comms python
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	awoonyaa@gmail.com
COMMENT=	Command line interface for Nitrokey FIDO2, Nitr. Start, Nitr.3, NetHSM
WWW=		https://pypi.org/project/pynitrokey/

LICENSE=	MIT

DEPRECATED=	Depends on expiring comms/py-spsdk
EXPIRATION_DATE=2025-06-21

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}spsdk>=0:comms/py-spsdk@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}certifi>=14.5.14,:security/py-certifi@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}cffi>=0:devel/py-cffi@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}click>=8.0,:devel/py-click@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}ecdsa>=0:security/py-ecdsa@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}fido2>=1.1.2,<2:security/py-fido2@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}intelhex>=0:devel/py-intelhex@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pyusb>=0:devel/py-pyusb@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}requests>=0:www/py-requests@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}tqdm>=0:misc/py-tqdm@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pyserial>=0:comms/py-pyserial@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}semver>=0:devel/py-semver@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}nkdfu>=0:comms/py-nkdfu@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}python-dateutil>=2.7.0:devel/py-python-dateutil@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}tlv8>=0:converters/py-tlv8@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}typing-extensions>=4.3.0:devel/py-typing-extensions@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}click_aliases>=0:devel/py-click-aliases@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}nethsm>=1.0.0,<2:security/py-nethsm@${PY_FLAVOR}  \
		${PYTHON_PKGNAMEPREFIX}google-api-python-client>0:www/py-google-api-python-client@${PY_FLAVOR}  \
		${PYTHON_PKGNAMEPREFIX}importlib-metadata>0:devel/py-importlib-metadata@${PY_FLAVOR}
RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}spsdk>=0:comms/py-spsdk@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}certifi>=14.5.14,:security/py-certifi@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}cffi>=0:devel/py-cffi@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}click>=8.0,:devel/py-click@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}ecdsa>=0:security/py-ecdsa@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}fido2>=1.1.2,<2:security/py-fido2@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}intelhex>=0:devel/py-intelhex@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pyusb>=0:devel/py-pyusb@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}requests>=0:www/py-requests@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}tqdm>=0:misc/py-tqdm@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pyserial>=0:comms/py-pyserial@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}semver>=0:devel/py-semver@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}nkdfu>=0:comms/py-nkdfu@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}python-dateutil>=2.7.0:devel/py-python-dateutil@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}tlv8>=0:converters/py-tlv8@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}typing-extensions>=4.3.0:devel/py-typing-extensions@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}click_aliases>=0:devel/py-click-aliases@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}nethsm>=1.0.0,<2:security/py-nethsm@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}google-api-python-client>0:www/py-google-api-python-client@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}importlib-metadata>0:devel/py-importlib-metadata@${PY_FLAVOR}

PEP517_BUILD_CMD=	${PYTHON_CMD} -m flit_core.wheel
PEP517_BUILD_DEPEND=	${PYTHON_PKGNAMEPREFIX}flit-core>=3.2.0<4:devel/py-flit-core@${PY_FLAVOR}

USES=		python shebangfix
USE_PYTHON=	autoplist concurrent cryptography pep517

SHEBANG_FILES=	pynitrokey/start/upgrade_by_passwd.py \
		pynitrokey/start/usb_strings.py

NO_ARCH=	yes

.include <bsd.port.mk>
